﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogViewComponent : MonoBehaviour
{
    public GameObject logLinePrefab;

    private LinkedList<GameObject> logLines = new LinkedList<GameObject>();
    private TextGenerator textGen;

    public void LogLine(string line)
    {
        if (this.textGen == null)
        {
            this.textGen = new TextGenerator();
        }

        var newLine = GameObject.Instantiate(logLinePrefab, this.gameObject.transform, false);
        var textComponent = newLine.GetComponent<Text>();
        textComponent.text = line;
        float textHeight = this.textGen.GetPreferredHeight(
            line,
            textComponent.GetGenerationSettings(((RectTransform)this.gameObject.transform).rect.size));
        var layout = newLine.GetComponent<LayoutElement>();
        layout.minHeight = textHeight;
        logLines.AddLast(newLine);
     }

    void Start()
    {
        Debug.Assert(this.logLinePrefab.GetComponent<Text>() != null);
    }
	
	void Update()
    {        
        var viewTransform = (RectTransform)this.gameObject.transform;

        if (this.logLines.Last == null)
        {
            return;
        }

        var lastLineTransform = (RectTransform)this.logLines.Last.Value.transform;
        float overflow = -((lastLineTransform.localPosition.y - (lastLineTransform.rect.height/2)) - viewTransform.rect.yMin); // Postive overflow is a negative delta

        while (overflow > 0)
        {
            var firstLineNode = this.logLines.First;
            if (firstLineNode == null)
            {
                break;
            }
            var firstLineObj = firstLineNode.Value;
            var firstLineHeight = ((RectTransform)firstLineObj.transform).rect.height;
            GameObject.Destroy(firstLineObj);
            this.logLines.Remove(firstLineNode);
            overflow -= firstLineHeight;
        }
	}
}
