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

        //�÷��̾� �Է� Ȱ��ȭ
        _inputs.Player.Enable();

        Vector2 direction = transform.position - mousePos;
        Vector2 rotation = transform.position - mousePos;

        //�Ѿ��� �߻� �ӵ��� ��ġ ����
        rb.velocity = new Vector2(direction.x, direction.y).normalized * force;

        //�Ѿ��� �߻� ���� ����
        float rot = Mathf.Atan2(rotation.y, rotation.x) * Mathf.Rad2Deg + 190;

        //������ ��ŭ ���� ȸ��
        transform.rotation = Quaternion.Euler(0, 0, rot);
    }

    private void Update()
    {
        //�÷��̾��� ���콺 ��ġ�� ���� 2�� ������
        screenPosition = _inputs.Player.MousePos.ReadValue<Vector2>();

        //z���� ����� ������ �������� + 1�� ����
        screenPosition.z = Camera.main.nearClipPlane + 1;

        //��ũ�� ��ǥ�� ���� ��ǥ�� ����
        mousePos = Camera.main.ScreenToWorldPoint(screenPosition);

    }

    #region OnTrigger_CallBack
    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "Enemy")
        {
            //���� �μ���
            Destroy(other.gameObject);

            //���ھ �ø���
            GameManager.score += 10;

            //�ڽ��� �μ�
            Destroy(gameObject);
        }
    }
    #endregion
}
