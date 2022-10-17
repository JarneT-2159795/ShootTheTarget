using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class reset : MonoBehaviour
{
    [SerializeField] private GameObject hand;
    private static bool pressed =false;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == hand && !pressed)
            
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            pressed = true;
        }

    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == hand && pressed)

        {
            //SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            pressed = false;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
