using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Vector3 screenPosition;
    private Vector3 mousePos;

    private DefaultInputActions _inputs;

    private Rigidbody rb;

    private float force;
  
    private void Start()
    {
        rb = GetComponent<Rigidbody>();

        _inputs = new DefaultInputActions();

        //플레이어 입력 활성화
        _inputs.Player.Enable();

        Vector2 direction = transform.position - mousePos;
        Vector2 rotation = transform.position - mousePos;

        //총알의 발사 속도와 위치 지정
        rb.velocity = new Vector2(direction.x, direction.y).normalized * force;

        //총알의 발사 각도 지정
        float rot = Mathf.Atan2(rotation.y, rotation.x) * Mathf.Rad2Deg + 190;

        //지정한 만큼 각도 회전
        transform.rotation = Quaternion.Euler(0, 0, rot);
    }

    private void Update()
    {
        //플레이어의 마우스 위치를 벡터 2로 가져옴
        screenPosition = _inputs.Player.MousePos.ReadValue<Vector2>();

        //z축은 가까운 평지를 기준으로 + 1한 값임
        screenPosition.z = Camera.main.nearClipPlane + 1;

        //스크린 좌표를 월드 좌표로 변경
        mousePos = Camera.main.ScreenToWorldPoint(screenPosition);

    }

    #region OnTrigger_CallBack
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Enemy")
        {
            //적을 부수고
            Destroy(other.gameObject);

            //스코어를 올리고
            GameManager.score += 10;

            //자신을 부숨
            Destroy(gameObject);
        }
    }
    #endregion
}
