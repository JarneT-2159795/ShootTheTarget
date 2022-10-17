using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class despawn : MonoBehaviour
{
    // Start is called before the first frame update
    private float timer;
    void Start()
    {
         timer = 10f;
    }

    // Update is called once per frame
    void Update()
    {
        if (timer > 0)
        {
            timer = timer - 1*Time.deltaTime;
        }
        else
        {
            GameObject.Destroy(gameObject);
        }
    }
}
