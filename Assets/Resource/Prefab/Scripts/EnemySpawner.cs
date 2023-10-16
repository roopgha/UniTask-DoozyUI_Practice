using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class EnemySpawner : MonoBehaviour
{
    [SerializeField] private GameObject enemyObject;

    [SerializeField] private Transform spawnerTransform;
    [SerializeField] private Transform enemyParent;

    private RectTransform rectTransform;

    private GameObject[] enemys;

    // Start is called before the first frame update
    void Start()
    {
        rectTransform = GetComponent<RectTransform>();
        EnemySpawn().Forget();
        RandomMove().Forget();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private async UniTaskVoid EnemySpawn()
    {
        while(true)
        {
            if(enemyParent != null && GameManager.isPlayerDeath == false)
            {
                GameObject enemy = Instantiate(enemyObject, spawnerTransform);
                enemy.transform.SetParent(enemyParent);
            }
            await UniTask.WaitForSeconds(0.7f);
        }
    }

    private async UniTaskVoid RandomMove()
    {
        while(true)
        {
            var position_X = new float[] { -960, 960 };
            var position_Y = new float[] { -525, 525 };
            int ran, spawnMethod;
            ran = Random.Range(0, 100);
            ran = ran % 2;
            if(rectTransform != null)
            {
                spawnMethod = Random.Range(0, 100);
                spawnMethod = spawnMethod % 2;
                if(spawnMethod == 0)
                {
                    rectTransform.anchoredPosition = new Vector2(Random.Range(-960, 960), position_Y[ran]);
                }
                else
                {
                    rectTransform.anchoredPosition = new Vector2(position_X[ran], Random.Range(-525, 525));
                }
            }
            await UniTask.WaitForSeconds(0.25f);
        }
    }

    public void DestroyAllEnemys()
    {
        enemys = GameObject.FindGameObjectsWithTag("Enemy");
        foreach(var enemy in enemys)
        {
            Destroy(enemy);
        }
    }
}
