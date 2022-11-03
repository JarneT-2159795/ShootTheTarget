using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class startvideo : MonoBehaviour
{
    [SerializeField] private List<GameObject> videoplayers = new List<GameObject>();
    [SerializeField] private GameObject lhand;
    [SerializeField] private GameObject rhand;
    private List<UnityEngine.Video.VideoPlayer> videoPlayerComponents = new List<UnityEngine.Video.VideoPlayer>();
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("ooogabogaa "+videoplayers.Count);
        foreach (GameObject item in videoplayers)
        {
            videoPlayerComponents.Add(item.GetComponent<UnityEngine.Video.VideoPlayer>()) ;
            Debug.Log("edit");
        }
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == lhand || other.gameObject == rhand)
        {
            foreach (UnityEngine.Video.VideoPlayer item in videoPlayerComponents)
            {
                if (item != videoPlayerComponents[0])
                {
                    item.SetDirectAudioMute(0,true);
                }
                item.Play();
                item.isLooping = true;
            }
            foreach (GameObject item in videoplayers)
            {
                item.GetComponent<MeshRenderer>().enabled = true;
            }
            
            
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
