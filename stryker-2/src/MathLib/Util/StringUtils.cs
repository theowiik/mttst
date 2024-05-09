namespace MathLib.Util;

using System;
using System.Globalization;
using System.Text;

public static class StringUtils
{
    public static bool IsNullOrEmpty(string value)
    {
        return string.IsNullOrEmpty(value);
    }

    public static string Reverse(string value)
    {
        if (IsNullOrEmpty(value))
            return value;

        char[] array = value.ToCharArray();
        Array.Reverse(array);
        return new string(array);
    }

    public static string ToTitleCase(string value)
    {
        if (IsNullOrEmpty(value))
            return value;

        TextInfo textInfo = CultureInfo.CurrentCulture.TextInfo;
        return textInfo.ToTitleCase(value);
    }
}
