using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System.Linq;

//ToDo rename
public class LostRiskIndicator : MonoBehaviour
{
    public Material[] materialsToSet;
    public Transform DirectionIndicator;

    private void Start()
    {
        var renderer = this.GetComponentsInChildren<Renderer>();
        materialsToSet = (from r in renderer select r.material).ToArray();
    }

    public void SetColor(Color c)
    {
        if (materialsToSet != null)
        {
            foreach (var m in materialsToSet)
            {
                m.SetColor("_Color", c);
            }
        }
    }

    public void SetDirectionIndicator(Vector3 dir)
    {
        this.DirectionIndicator.transform.rotation = Quaternion.LookRotation(dir); // try ups
    }
}
