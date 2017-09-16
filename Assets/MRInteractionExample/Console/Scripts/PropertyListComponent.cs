using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PropertyListComponent : MonoBehaviour
{
    public GameObject propertyFieldPrefab;

    private Dictionary<string, LabeledFieldComponent> properties = new Dictionary<string, LabeledFieldComponent>();

    public void UpdateProperty(string name, string value)
    {
        LabeledFieldComponent field;
        if (!this.properties.TryGetValue(name, out field))
        {
            var newObject = GameObject.Instantiate(this.propertyFieldPrefab);
            newObject.transform.SetParent(this.gameObject.transform, false);
            field = newObject.GetComponent<LabeledFieldComponent>();
            field.labelTextComponent.text = name;
            this.properties[name] = field;
        }

        field.valueTextComponent.text = value;
    }

    public void RemoveProperty(string name)
    {
        LabeledFieldComponent field;
        if (this.properties.TryGetValue(name, out field))
        {
            GameObject.Destroy(field.gameObject);
            this.properties.Remove(name);
        }
    }

    private void Start()
    {
        Debug.Assert(this.propertyFieldPrefab.GetComponent<LabeledFieldComponent>() != null);
    }

    // Update is called once per frame
    void Update ()
    {
	}
}
