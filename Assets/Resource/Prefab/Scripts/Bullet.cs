using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Vector3 screenPosition;
    private Vector3 mousePos;
    private DefaultInputActions _inputs;
    private Rigidbody rb;
    public float force;
  
    private void Start()
    {
        rb = GetComponent<Rigidbody>();

        _inputs = new DefaultInputActions();
        _inputs.Player.Enable();

        Vector2 direction = transform.position - mousePos;
        Vector2 rotation = transform.position - mousePos;

        rb.velocity = new Vector2(direction.x, direction.y).normalized * force;

        float rot = Mathf.Atan2(rotation.y, rotation.x) * Mathf.Rad2Deg + 190;

        transform.rotation = Quaternion.Euler(0, 0, rot);
    }

    private void Update()
    {

        screenPosition = _inputs.Player.MousePos.ReadValue<Vector2>();
        screenPosition.z = Camera.main.nearClipPlane + 1;

        mousePos = Camera.main.ScreenToWorldPoint(screenPosition);

    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Enemy")
        {
            Destroy(other.gameObject);
            GameManager.score += 10;
            Destroy(gameObject);
        }
    }
}
