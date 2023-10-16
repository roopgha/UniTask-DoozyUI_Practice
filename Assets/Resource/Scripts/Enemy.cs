using Cysharp.Threading.Tasks;
using System;
using System.Threading;
using Unity.VisualScripting;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    [SerializeField] private GameObject player;
    [SerializeField] private GameManager manager;
    [SerializeField] private Score scoreManager;

    public float speed = 1;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");
        EnemyAsyncCancel().Forget();
        MoveToPlayer().Forget();
    }

    private async UniTaskVoid MoveToPlayer()
    {
        while (true)
        {
            if(GameManager.isPlayerDeath == false)
            {
                if (this.IsDestroyed())
                {
                    await EnemyAsyncCancel();
                }

                transform.LookAt(player.transform);

                transform.position += transform.forward * speed * Time.deltaTime;

                await UniTask.DelayFrame(1);
            }
            else
            {
                break;
            }
        }
    }

    private async UniTask EnemyAsyncCancel()
    {
        var cts = this.GetCancellationTokenOnDestroy();
        await UniTask.DelayFrame(1000, cancellationToken: cts);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == player)
        {
            manager.PlayerDeath();
            scoreManager = GameObject.Find("PrintScore").GetComponent<Score>();
            scoreManager.PrintHighScore();
        }
    }
}
