namespace MathLib.Util;

public static class NumberUtils
{
    public static bool IsValidInteger(string input)
    {
        return int.TryParse(input, out _);
    }

    public static string ToOrdinal(int number)
    {
        if (number <= 0)
            return number.ToString();

        switch (number % 100)
        {
            case 11:
            case 12:
            case 13:
                return number + "th";
        }

        switch (number % 10)
        {
            case 1:
                return number + "st";
            case 2:
                return number + "nd";
            case 3:
                return number + "rd";
            default:
                return number + "th";
        }
    }

    public static string FormatWithCommas(int number)
    {
        return number.ToString("N0");
    }
}
