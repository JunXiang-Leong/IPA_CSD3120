using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreScript : MonoBehaviour
{
	// Start is called before the first frame update
	int total_score = 0;
	float remaining_time = 60.0f;
	public float max_time = 60.0f;
	public GameObject scoreObj;
	public GameObject timeObj;
    void Start()
    {
		ResetGame();
	}

    // Update is called once per frame
    void Update()
    {
        if(remaining_time > 0.0)
		{
			remaining_time -= Time.deltaTime;
			if (remaining_time < 0)
				remaining_time = 0;
			timeObj.GetComponent<TMPro.TextMeshPro>().text = remaining_time.ToString();
		}
    }
	public void UpdateScore(int score)
	{
		if (remaining_time > 0.0)
		{
			total_score += score;
			gameObject.GetComponent<TMPro.TextMeshPro>().text = total_score.ToString();
		}
	}
	public void ResetGame()
	{
		remaining_time = max_time;
		total_score = 0;
		gameObject.GetComponent<AudioSource>().Play();
	}
}
