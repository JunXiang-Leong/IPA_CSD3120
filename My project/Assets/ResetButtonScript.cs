using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class ResetButtonScript : MonoBehaviour
{
	bool countdown = false;
	public UnityEvent e;
	float timer = 3.0f;
	public GameObject timerobj;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(countdown == true)
		{
			timer -= Time.deltaTime;
			string time = timer.ToString();
			timerobj.GetComponent<TMPro.TextMeshPro>().text = time;
			if(timer <= 0)
			{
				timerobj.SetActive(false);
				countdown = false;
				timer = 3.0f;
				e.Invoke();
			}
		}
    }
	private void OnTriggerEnter(Collider other)
	{
		if(other.name.Contains("Input"))
		{
			timerobj.SetActive(true);
			countdown = true;
		}
	}
	private void OnTriggerExit(Collider other)
	{
		if (other.name.Contains("Input"))
		{
			timerobj.SetActive(false);
			countdown = false;
			timer = 3.0f;
		}
	}
}
