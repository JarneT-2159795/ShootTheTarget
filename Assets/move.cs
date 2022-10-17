using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class move : MonoBehaviour
{
    private bool right;
    private Vector3 start;
    // Start is called before the first frame update
    void Start()
    {
        start = gameObject.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
 
        
        if (right) {
            gameObject.transform.localPosition = gameObject.transform.localPosition + new Vector3(1 * Time.deltaTime *1, 0, 0); 
        }
        else
        {
            gameObject.transform.localPosition = gameObject.transform.localPosition  + new Vector3(1 * Time.deltaTime * -1, 0, 0);
        }

        if (Math.Abs(gameObject.transform.localPosition.x-start.x) > 3)
        {
            right = !right;
        }
    }
}
