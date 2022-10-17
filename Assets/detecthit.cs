using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class detecthit : MonoBehaviour
{
    [SerializeField]private GameObject bullets;
    [SerializeField] private GameObject text;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        //other.gameObject.layer.ToString() == "bullet"
        if (other.gameObject.layer == bullets.layer)
        {
            string currentScore =text.GetComponent<TextMeshPro>().text;
            int score =int.Parse(currentScore);
            score++;
            text.GetComponent<TextMeshPro>().SetText(score.ToString());
            Debug.Log("hit"+gameObject.name);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
