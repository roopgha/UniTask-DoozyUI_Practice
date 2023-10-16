using Cysharp.Threading.Tasks;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.AI;

public class Score : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI highScoreText;

    [SerializeField] private GameManager gameManager;

    private void Start()
    {
        PrintScore().Forget();
    }

    private async UniTaskVoid PrintScore()
    {
        while (true)
        {
            scoreText.text = "Score : " + GameManager.score.ToString();
            await UniTask.DelayFrame(1);
        }
    }

    public void PrintHighScore()
    {
        if(GameManager.score > GameManager.highScore)
        {
            CountHighScore(GameManager.score, GameManager.highScore).Forget();
            GameManager.highScore = GameManager.score;
            gameManager.SaveScore();
        }
        else if (GameManager.highScore > 0)
        {
            highScoreText.text = "High Score " + GameManager.highScore.ToString();
        }
    }

    private async UniTaskVoid CountHighScore(float target, float current)
    {
        float duration = 0.7f;
        float offset = (target - current) / duration;

        while(current < target)
        {
            current += offset * Time.deltaTime;
            highScoreText.text = "New Record " + ((int)current).ToString() + "!!";
            await UniTask.Yield();
        }

        current = target;
        highScoreText.text = "New Record " + ((int)current).ToString() + "!!";
    }
}
