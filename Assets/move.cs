using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class move : MonoBehaviour
{
    private bool right;
    [SerializeField] private GameObject startObject;
    [SerializeField] private bool canMove =true ;
    private Vector3 start;
    // Start is called before the first frame update
    void Start()
    {
        start = startObject.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {

        if (!canMove)
        {
            return;
        }
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
