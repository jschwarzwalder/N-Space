
using System;

using UnityEngine;

[System.Serializable]
public class ReorderableColorPallet : ReorderableList<Color>
{
    public float[] Cutoffs { get; set; }

    public Color GetColorForValue(float normalizedVal)
    {
        if (normalizedVal < 0 || normalizedVal > 1  || float.IsNaN(normalizedVal))
        {
            throw new InvalidOperationException("given non normalized value!");
        }

        if (Cutoffs == null || Cutoffs.Length != this.Length)
        {
            return this.GetColorForValueOld(normalizedVal);
        }

        int colorPalletIndex = 0;
        float colorPalletVal = 0;

        float length = this.Length - 1;
        for (; colorPalletIndex < this.Length - 1; ++colorPalletIndex)
        {
            if (colorPalletIndex < 0 || colorPalletIndex + 1 > this.List.Count)
            {
                throw new ArgumentOutOfRangeException();
            }

            if (normalizedVal >= (float)Cutoffs[colorPalletIndex] && normalizedVal <= Cutoffs[colorPalletIndex + 1])
            {
                // todo: investigate if this should be this.Length;
                colorPalletVal = (normalizedVal - (float)colorPalletIndex / length) * length;
                break;
            }
        }

        if (colorPalletIndex < 0 || colorPalletIndex + 1 >= this.List.Count)
        {
            throw new ArgumentOutOfRangeException();
        }

        return this.List[colorPalletIndex] + colorPalletVal * (this.List[colorPalletIndex + 1] - this.List[colorPalletIndex]);
    }

    private Color GetColorForValueOld(float normalizedVal)
    {
        if (normalizedVal < 0 || normalizedVal > 1)
        {
            throw new InvalidOperationException("given non normalized value!");
        }

        int colorPalletIndex = 0;
        float colorPalletVal = 0;

        float length = this.Length - 1;
        for (; colorPalletIndex < this.Length - 1; ++colorPalletIndex)
        {
            if (normalizedVal >= (float)colorPalletIndex / length && normalizedVal <= (float)(colorPalletIndex + 1) / length)
            {
                colorPalletVal = (normalizedVal - (float)colorPalletIndex / length) * length;
                break;
            }
        }

        return this.List[colorPalletIndex] + colorPalletVal * (this.List[colorPalletIndex + 1] - this.List[colorPalletIndex]);
    }
}
