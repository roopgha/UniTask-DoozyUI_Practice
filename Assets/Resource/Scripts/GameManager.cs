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

        //만약 디렉토리가 존재하지 않는다면?
        if (!Directory.Exists(Application.dataPath + "/Resources/Save/"))
        {
            //디렉토리를 생성
            Directory.CreateDirectory(Application.dataPath + "/Resources/Save/");
        }

        //만약 파일이 없다면?
        if (!File.Exists(path))
        {
            //파일을 생성 후
            Stream stream = File.Create(path);

            //스트림을 닫음
            stream.Close();
        }

        //파일에서 모든 값을 읽어옴
        string json = File.ReadAllText(path);

        //그 값을 UserData 형식으로 변경
        UserData loadedData = JsonUtility.FromJson<UserData>(json);

        //만약 불러온 값이 있다면
        if (loadedData != null)
        {
            //현재 최고 스코어를 불러온 스코어로 변경
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

        //UserData를 Json 형식으로 변형
        string json = JsonUtility.ToJson(data);

        //Json에 저장
        File.WriteAllText(path, json);
    }

    public void GetViews()
    {
        //플레이어가 죽었을 때 뜨는 팝업을 가져옴
        deathCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        deathView = deathCanvas.transform.GetChild(0).GetComponent<UIView>();

        //플레이어가 게임을 정지하였을 때 뜨는 팝업을 가져옴
        pauseCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        pauseView = pauseCanvas.transform.GetChild(2).GetComponent<UIView>();
    }
    #endregion

    #region Volume_Callback
    private async UniTask GetVolumeTooltip()
    {
        //Override된 Tooltips Canvas를 가져온다.
        volumeTooltipCanvas = GameObject.Find("Tooltips Canvas").GetComponent<Canvas>();

        //Canvas가 존재하고 Canvas의 Child가 있다면?
        if (volumeTooltipCanvas != null && volumeTooltipCanvas.transform.childCount > 0)
        {
            //Child 0번째에서 VolumeTooltip을 가져옴
            volumeTooltip = volumeTooltipCanvas.transform.GetChild(0).GetComponent<UITooltip>();

            //VolumeTooltip의 Labels 0번째를 가져옴
            volumeText = volumeTooltip.Labels[0];
        }

        await UniTask.Yield();
    }
  
    public async void VolumeValue()
    {
        //GetVolumeTooltip이 끝날 때까지 기다림
        await GetVolumeTooltip();

        audio.volume = audioVolume.value;

        //VolumeText를 Audio.Volume을 %형식으로 전환하여 출력
        volumeText.text = audio.volume.ToString("0%");
    }

    #endregion

    #region Btn_CallBack

    public void OnClickMain()
    {
        UserData data = new UserData();

        //만약 스코어가 기존의 최고 스코어보다 높다면?
        if (score > highScore)
        {
            //최고 스코어를 현재 스코어로 변경하고
            data.highScore = score;
            highScore = score;

            // Json 형식으로 바꿔서
            string json = JsonUtility.ToJson(data);

            //저장한다
            File.WriteAllText(path, json);
        }
    }

    public void OnClickResumeBtn()
    {
        //만약 플레이어가 죽은 상태라면
        if(isPlayerDeath)
        {
            //timeScale을 되돌리지 않고 DeathView만 다시 보여주기
            deathView.Show();
        }
        else
        {
            //아니라면 timeScale 되돌리기
            Time.timeScale = 1f;
        }
        pauseView.Hide();
    }

    public void Pause()
    {
        Time.timeScale = 0f;

        //플레이어가 죽은 상태라면
        if (isPlayerDeath)
        {
            //DeathView를 숨기고
            deathView.Hide();
        }
        //PauseView를 보여줌
        pauseView.Show();
    }

    public void OnClickExitBtn()
    {
        //애플리케이션 종료
        Application.Quit();

        //만약 유니티 에디터가 아니라면?
#if !UNITY_EDITOR

        //모든 프로세스를 죽인다!
        System.Diagnostics.Process.GetCurrentProcess().Kill();
#else
        //유니티 에디터라면 플레이 모드 종료
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

        //하이 스코어를 0으로 만든 다음
        highScore = 0;

        //Json도 0으로 저장
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
