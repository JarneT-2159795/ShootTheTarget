using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class triggerpress : MonoBehaviour
{
    private OVRGrabbable grabbable;
    private OVRGrabber grabber;
    private bool pressed = false;
    [SerializeField] private OVRGrabber left;
    [SerializeField] private OVRGrabber right;
    [SerializeField] private GameObject bullet;
    // Start is called before the first frame update
    void Start()
    {
        grabbable = GetComponent<OVRGrabbable>();
    }
    public void log()
    {
        Debug.Log("trigger");
    }
    // Update is called once per frame
    void Update()
    {
        if (grabbable.isGrabbed)
        {
            grabber = grabbable.grabbedBy;
        }
        
        if ((grabber == left&&OVRInput.Get(OVRInput.RawButton.LIndexTrigger))
            ||(grabber==right && OVRInput.Get(OVRInput.RawButton.RIndexTrigger)))
        {
            if (!pressed)
            {
                GameObject fired = Instantiate(bullet, GameObject.Find("bullet start").transform);
                fired.GetComponent<Rigidbody>().velocity = fired.transform.right * -100;
                pressed = true;
            }
        }
        else
        {
            pressed = false;
        }
    }
}
