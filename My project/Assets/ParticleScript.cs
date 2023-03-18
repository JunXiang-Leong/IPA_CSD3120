using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleScript : MonoBehaviour
{
	// Start is called before the first frame update
	float time_accumulator = 0;
    void Start()
    {
		//gameObject.GetComponent<ParticleSystem>().Play();
    }

    // Update is called once per frame
    void Update()
    {
		time_accumulator += Time.deltaTime;
		if (time_accumulator > 0.5f)
			GameObject.Destroy(gameObject);
    }
}
