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

    private string path { get => Application.dataPath + "/Resources/Save/Score.json"; }

    public static int score, highScore;

    [System.Serializable]
    public class UserData
    {
        public int highScore;
    }

    private void Awake()
    {
        print(Application.dataPath);
        DontDestroyOnLoad(this);
        if (!Directory.Exists(Application.dataPath + "/Resources/Save/"))
        {
            Directory.CreateDirectory(Application.dataPath + "/Resources/Save/");
        }
        if (!File.Exists(path))
        {
            Stream stream = File.Create(path);
            stream.Close();
        }

        string json = File.ReadAllText(path);

        UserData loadedData = JsonUtility.FromJson<UserData>(json);

        if (loadedData != null)
        {
            highScore = loadedData.highScore;
        }

        print(highScore);
    }

    // Start is called before the first frame update
    void Start()
    {
        audio.volume = audioVolume.value;
    }

    // Update is called once per frame
    void Update()
    {

    }
    #region Game_CallBack
    public void PlayerDeath()
    {
        isPlayerDeath = true;
        deathView.Show();
    }

    public void Pause()
    {
        Time.timeScale = 0f;
        if(isPlayerDeath)
        {
            deathView.Hide();
        }
        pauseView.Show();
    }

    public void SaveScore()
    {
        UserData data = new UserData();
        data.highScore = highScore;

        string json = JsonUtility.ToJson(data);
        File.WriteAllText(path, json);
    }

    public void OnClickMain()
    {
        UserData data = new UserData();
        if(score > highScore)
        {
            data.highScore = score;
            highScore = score;
            string json = JsonUtility.ToJson(data);
            File.WriteAllText (path, json);
        }
    }

    public void GetViews()
    {
        deathCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        deathView = deathCanvas.transform.GetChild(0).GetComponent<UIView>();

        pauseCanvas = GameObject.Find("UICanvas").GetComponent<Canvas>();
        pauseView = pauseCanvas.transform.GetChild(2).GetComponent<UIView>();
    }
    #endregion

    #region Volume_Callback
    private async UniTask GetVolumeTooltip()
    {
        await UniTask.DelayFrame(5);
        volumeTooltipCanvas = GameObject.Find("Tooltips Canvas").GetComponent<Canvas>();
        if (volumeTooltipCanvas != null && volumeTooltipCanvas.transform.childCount > 0)
        {
            volumeTooltip = volumeTooltipCanvas.transform.GetChild(0).GetComponent<UITooltip>();
            volumeText = volumeTooltip.Labels[0];
        }
    }
  
    public async void VolumeValue()
    {
        await GetVolumeTooltip();
        audio.volume = audioVolume.value;
        volumeText.text = audio.volume.ToString("0%");
    }

    #endregion
 
    #region Btn_CallBack
    public void OnClickResumeBtn()
    {
        
        if(isPlayerDeath)
        {
            deathView.Show();
        }
        else
        {
            Time.timeScale = 1f;
        }
        pauseView.Hide();
    }

    public void OnClickExitBtn()
    {
        Application.Quit();
#if !UNITY_EDITOR
        System.Diagnostics.Process.GetCurrentProcess().Kill();
#else
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
        highScore = 0;
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
