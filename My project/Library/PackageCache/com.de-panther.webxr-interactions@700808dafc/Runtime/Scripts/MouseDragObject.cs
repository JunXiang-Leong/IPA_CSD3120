using UnityEngine;
using System.Collections.Generic;
using System;
using System.Linq;
namespace WebXR.Interactions
{
  [RequireComponent(typeof(Rigidbody))]
  public class MouseDragObject : MonoBehaviour
  {
    private Camera m_currentCamera;
    private Rigidbody m_rigidbody;
    private Vector3 m_screenPoint;
    private Vector3 m_offset;
    private Vector3 m_currentVelocity;
    private Vector3 m_previousPos;
	private Queue<Vector3> previousVel = new Queue<Vector3>();
	public int MAX_QUEUE_COUNT = 5;
	bool pickedup = false;
    void Awake()
    {
      m_rigidbody = GetComponent<Rigidbody>();
    }

    void OnMouseDown()
    {
      m_currentCamera = FindCamera();
      if (m_currentCamera != null)
      {
        m_screenPoint = m_currentCamera.WorldToScreenPoint(gameObject.transform.position);
        m_offset = gameObject.transform.position - m_currentCamera.ScreenToWorldPoint(GetMousePosWithScreenZ(m_screenPoint.z));
      }
    }
	public void PickupItem()
	{
		pickedup = true;
		m_screenPoint = m_currentCamera.WorldToScreenPoint(gameObject.transform.position);
		m_offset = gameObject.transform.position - m_currentCamera.ScreenToWorldPoint(GetMousePosWithScreenZ(m_screenPoint.z));
	}
	public void DropItem()
	{
		pickedup = false;
		Vector3 temp = Vector3.zero;
		foreach (var item in previousVel)
			temp += item;
		temp = temp * (1.0f / MAX_QUEUE_COUNT) * 30.0f; //average of 10frame and 30X boost to velocity
		m_rigidbody.velocity = temp;
	}
    void OnMouseUp()
    {
		Vector3 temp = Vector3.zero;
		foreach (var item in previousVel)
			temp += item;

#if UNITY_EDITOR
			temp = temp * (1.0f/ MAX_QUEUE_COUNT);
#else
			temp = temp * (1.0f / MAX_QUEUE_COUNT) * 30.0f; //average of 10frame and 30X boost to velocity
#endif
		m_rigidbody.velocity = temp;
		if(Input.GetKey(KeyCode.Space))
		{
			m_rigidbody.velocity = m_currentCamera.transform.forward * 30.0f;
		}
		m_currentCamera = null;
    }

    void FixedUpdate()
    {
      if (m_currentCamera != null || pickedup != false)
      {
        Vector3 currentScreenPoint = GetMousePosWithScreenZ(m_screenPoint.z);
        m_rigidbody.velocity = Vector3.zero;
        m_rigidbody.MovePosition(m_currentCamera.ScreenToWorldPoint(currentScreenPoint) + m_offset);
        m_currentVelocity = (transform.position - m_previousPos) / Time.deltaTime;
		previousVel.Enqueue(m_currentVelocity);
		if (previousVel.Count > MAX_QUEUE_COUNT)
			previousVel.Dequeue();
		m_previousPos = transform.position;
      }
    }

    Vector3 GetMousePosWithScreenZ(float screenZ)
    {
      return new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenZ);
    }

    Camera FindCamera()
    {
      Camera[] cameras = FindObjectsOfType<Camera>();
      Camera result = null;
      int camerasSum = 0;
      foreach (var camera in cameras)
      {
        if (camera.enabled)
        {
          result = camera;
          camerasSum++;
        }
      }
      if (camerasSum > 1)
      {
        result = null;
      }
      return result;
    }
  }
}
