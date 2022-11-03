using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

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
            Vector3 center = this.GetComponent<MeshCollider>().bounds.center;
            Vector3 otherCenter=other.bounds.center;
            float distance = Vector2.Distance(new Vector2(center.x,center.y), new Vector2(otherCenter.x,otherCenter.y));
            float colliderRadius = GetComponent<MeshCollider>().bounds.extents.x;
            int score = (int)Math.Round(10.0 * (1.0 - distance / colliderRadius));
           
            //Debug.Log(1-distance / colliderRadius);
            string currentScore =text.GetComponent<TextMeshPro>().text;
            int currentScoreInt =int.Parse(currentScore);
            currentScoreInt+=score;
            text.GetComponent<TextMeshPro>().SetText(currentScoreInt.ToString());
            //  Debug.Log("hit"+gameObject.name);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
