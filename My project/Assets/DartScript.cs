using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DartScript : MonoBehaviour
{
	Vector3 position;
	Quaternion rotation;
	void Awake()
	{
		position = transform.localPosition;
		rotation = transform.localRotation;
	}

	// Update is called once per frame
	void Update()
	{
		if ((transform.localPosition - position).sqrMagnitude > 30000.0f)
			ResetItem();
	}
	public void ResetItem()
	{
		transform.localPosition = position;
		transform.localRotation = rotation;
		gameObject.GetComponent<Rigidbody>().velocity = Vector3.zero;
	}
	private void OnCollisionEnter(Collision collision)
	{
		if(collision.gameObject.tag != "Interactable")
			ResetItem();
	}
}
