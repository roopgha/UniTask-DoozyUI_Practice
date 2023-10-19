using Cysharp.Threading.Tasks;
using Doozy.Runtime.UIManager.Components;
using Doozy.Runtime.UIManager.Containers;
using System.IO;
using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private new AudioSource audio;

    [SerializeField] private UISlider audioVolume;

    [SerializeField] private Shooting shooting;

    [SerializeField] private UIView resetView, resetCompleteView;

    public static bool isPlayerDeath;

    private Canvas volumeTooltipCanvas;
    private Canvas deathCanvas, pauseCanvas;

    private UIView deathView, pauseView;

    private UITooltip volumeTooltip;

    private TextMeshProUGUI volumeText;

    private EnemySpawner spawner;

    public static int score, highScore;

    private string path { get => Application.dataPath + "/Resources/Save/Score.json"; }

    [System.Serializable]
    public class UserData
    {
        public int highScore;
    }

    private void Awake()
    {
        DontDestroyOnLoad(this);

        //���� ���丮�� �������� �ʴ´ٸ�?
        if (!Directory.Exists(Application.dataPath + "/Resources/Save/"))
        {
            //���丮�� ����
            Directory.CreateDirectory(Application.dataPath + "/Resources/Save/");
        }

        //���� ������ ���ٸ�?
        if (!File.Exists(path))
        {
            //������ ���� ��
            Stream stream = File.Create(path);

            //��Ʈ���� ����
            stream.Close();
        }

        //���Ͽ��� ��� ���� �о��
        string json = File.ReadAllText(path);

        //�� ���� UserData �������� ����
        UserData loadedData = JsonUtility.FromJson<UserData>(json);

        //���� �ҷ��� ���� �ִٸ�
        if (loadedData != null)
        {
            //���� �ְ� ���ھ �ҷ��� ���ھ�� ����
            highScore = loadedData.highScore;
        }

        audio.volume = audioVolume.value;
    }

    #region Game_CallBack

    public void PlayerDeath()
    {
        isPlayerDeath = true;
        deathView.Show();
    }

    public void SaveScore()
    {
        UserData data = new UserData();
        data.highScore = highScore;

        //UserData�� Json �������� ����
        string json = JsonUtility.ToJson(data);

        //Json�� ����
        File.WriteAllText(path, json);
    }

    public void GetViews()
    {
        //�÷��̾ �׾��� �� �ߴ� �˾��� ������
        deathCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        deathView = deathCanvas.transform.GetChild(0).GetComponent<UIView>();

        //�÷��̾ ������ �����Ͽ��� �� �ߴ� �˾��� ������
        pauseCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        pauseView = pauseCanvas.transform.GetChild(2).GetComponent<UIView>();
    }
    #endregion

    #region Volume_Callback
    private async UniTask GetVolumeTooltip()
    {
        //Override�� Tooltips Canvas�� �����´�.
        volumeTooltipCanvas = GameObject.Find("Tooltips Canvas").GetComponent<Canvas>();

        //Canvas�� �����ϰ� Canvas�� Child�� �ִٸ�?
        if (volumeTooltipCanvas != null && volumeTooltipCanvas.transform.childCount > 0)
        {
            //Child 0��°���� VolumeTooltip�� ������
            volumeTooltip = volumeTooltipCanvas.transform.GetChild(0).GetComponent<UITooltip>();

            //VolumeTooltip�� Labels 0��°�� ������
            volumeText = volumeTooltip.Labels[0];
        }

        await UniTask.Yield();
    }
  
    public async void VolumeValue()
    {
        //GetVolumeTooltip�� ���� ������ ��ٸ�
        await GetVolumeTooltip();

        audio.volume = audioVolume.value;

        //VolumeText�� Audio.Volume�� %�������� ��ȯ�Ͽ� ���
        volumeText.text = audio.volume.ToString("0%");
    }

    #endregion

    #region Btn_CallBack

    public void OnClickMain()
    {
        UserData data = new UserData();

        //���� ���ھ ������ �ְ� ���ھ�� ���ٸ�?
        if (score > highScore)
        {
            //�ְ� ���ھ ���� ���ھ�� �����ϰ�
            data.highScore = score;
            highScore = score;

            // Json �������� �ٲ㼭
            string json = JsonUtility.ToJson(data);

            //�����Ѵ�
            File.WriteAllText(path, json);
        }
    }

    public void OnClickResumeBtn()
    {
        //���� �÷��̾ ���� ���¶��
        if(isPlayerDeath)
        {
            //timeScale�� �ǵ����� �ʰ� DeathView�� �ٽ� �����ֱ�
            deathView.Show();
        }
        else
        {
            //�ƴ϶�� timeScale �ǵ�����
            Time.timeScale = 1f;
        }
        pauseView.Hide();
    }

    public void Pause()
    {
        Time.timeScale = 0f;

        //�÷��̾ ���� ���¶��
        if (isPlayerDeath)
        {
            //DeathView�� �����
            deathView.Hide();
        }
        //PauseView�� ������
        pauseView.Show();
    }

    public void OnClickExitBtn()
    {
        //���ø����̼� ����
        Application.Quit();

        //���� ����Ƽ �����Ͱ� �ƴ϶��?
#if !UNITY_EDITOR

        //��� ���μ����� ���δ�!
        System.Diagnostics.Process.GetCurrentProcess().Kill();
#else
        //����Ƽ �����Ͷ�� �÷��� ��� ����
        UnityEditor.EditorApplication.isPlaying = false;
#endif
    }

    public void OnClickRetryBtn()
    {
        shooting = GameObject.FindWithTag("Gun").GetComponent<Shooting>();
        spawner = GameObject.FindWithTag("Spawner").GetComponent<EnemySpawner>();
        shooting.DestroyAllBullets();
        spawner.DestroyAllEnemys();
        if (score > highScore)
        {
            highScore = score;
        }
        if (isPlayerDeath)
        {
            deathView.Hide();
        }
        else
        {
            pauseView.Hide();
        }
        isPlayerDeath = false;
        score = 0;
        Time.timeScale = 1f;
    }

    public void OnclickResetBtn()
    {
        resetView.Hide();

        //���� ���ھ 0���� ���� ����
        highScore = 0;

        //Json�� 0���� ����
        SaveScore();
        resetCompleteView.Show();
    }

    public void OnClickResetCompleteBtn()
    {
        resetCompleteView.Hide();
    }

    public void OnClickStartBtn()
    {
        score = 0;
        Shooting.isDestroy = false;
        isPlayerDeath = false;
        Time.timeScale = 1f;
    }
    #endregion
}
