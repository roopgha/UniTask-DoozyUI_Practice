using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using Doozy.Editor.UIManager.Windows;
using Doozy.Runtime.UIManager.Components;
using Doozy.Runtime.UIManager.Containers;
using Doozy.Runtime.UIManager.Nodes.Listeners;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.SocialPlatforms.Impl;

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

    private string path { get => Application.dataPath + "/Resource/Save/Score.json"; }

    public static int score, highScore;

    [System.Serializable]
    public class UserData
    {
        public int highScore;
    }

    private void Awake()
    {
        DontDestroyOnLoad(this);
        string json = File.ReadAllText(path);

        UserData loadedData = JsonUtility.FromJson<UserData>(json);

        highScore = loadedData.highScore;

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
        pauseView.Show();
    }

    public void SaveScore()
    {
        UserData data = new UserData();
        data.highScore = highScore;

        string json = JsonUtility.ToJson(data);
        File.WriteAllText(path, json);
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
        Time.timeScale = 1f;
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
