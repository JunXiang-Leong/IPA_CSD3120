using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class TargetScript : MonoBehaviour
{
	// Start is called before the first frame update
	public int score;
	public UnityEvent action;
	public GameObject prefab;
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
	private void OnTriggerEnter(Collider other)
	{
		Vector3 pos = transform.localPosition;
		pos.x = Random.Range(-20.0f, 20.0f);
		pos.y = Random.Range(-4.0f, 3.0f);
		transform.localPosition = pos;
		gameObject.GetComponent<AudioSource>().Play();
		other.gameObject.GetComponent<DartScript>().ResetItem();
		action.Invoke();
		GameObject.Instantiate(prefab, transform.position,transform.rotation);
	}

}
