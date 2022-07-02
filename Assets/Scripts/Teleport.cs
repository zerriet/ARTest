using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Teleport : MonoBehaviour
{
    public GameObject ARSessionOrigin;
    public GameObject Character;


    private void OnTriggerEnter(Collider other)
    {
        ARSessionOrigin.transform.position = new Vector3(500, 0, 0);
        Character.transform.position = new Vector3(400, 0, 0);
    }
}
