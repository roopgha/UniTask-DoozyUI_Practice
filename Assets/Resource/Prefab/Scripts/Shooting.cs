using Cysharp.Threading.Tasks;
using System;
using System.Threading;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;

public class Shooting : MonoBehaviour
{
    [SerializeField] private GameManager gameManager;

    [SerializeField] private GameObject prefabBullet;

    [SerializeField] private Camera mainCam;

    [SerializeField] private Transform bulletTransform;
    [SerializeField] private Transform bulletParent;

    public Vector3 screenPosition;
    Vector3 dir, rotation;

    public static bool isDestroy;

    private DefaultInputActions _inputs;

    private GameObject[] _allBullets;
   
    void Start()
    {
        gameManager.GetViews();

        _inputs = new DefaultInputActions();
        _inputs.Player.Enable();
        _inputs.UI.Enable();

        isDestroy = false;

        Fire().Forget();
        Aiming().Forget();
    }

    // Update is called once per frame
    void Update()
    {
        if(_inputs.UI.Pause.IsPressed())
        {
            gameManager.Pause();
        }
        screenPosition = _inputs.Player.MousePos.ReadValue<Vector2>();
        screenPosition.z = Camera.main.nearClipPlane + 1;

        dir = Camera.main.ScreenToWorldPoint(screenPosition);
        /*print(dir);*/
    }

    private async UniTaskVoid Fire()
    {
        /*print("hi");*/
        while (true)
        {
            if (Mouse.current.leftButton.wasPressedThisFrame)
            {
                /*print("fire!!");*/
                if (bulletTransform != null && bulletParent != null)
                {
                    GameObject bullet = Instantiate(prefabBullet, bulletTransform.position, Quaternion.identity);
                    bullet.transform.SetParent(bulletParent);
                    Destroy(bullet, 3);
                }
               /* bullet.gameObject.GetComponent<Rigidbody>().AddRelativeForce(dir.normalized * bulletSpeed, ForceMode.Impulse);*/
                await UniTask.Delay(50);
            }
            await UniTask.DelayFrame(1);
        }
    }

    private async UniTaskVoid Aiming()
    {
        while (isDestroy != true)
        {
            rotation = dir - transform.position;

            float rotZ = Mathf.Atan2(rotation.y, rotation.x) * Mathf.Rad2Deg;

            transform.rotation = Quaternion.Euler(0, 0, rotZ);

            await UniTask.DelayFrame(1);

        }
    }

    public void DestroyAllBullets()
    {
        _allBullets = GameObject.FindGameObjectsWithTag("Bullet");
        foreach (var bullet in _allBullets)
        {
            Destroy(bullet);
        }
    }

    private void OnDestroy()
    {
        isDestroy = true;
    }
}
