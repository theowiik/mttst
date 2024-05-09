namespace MathLib;

public static class Program
{
    public static void Main()
    {
        var adder = new Addition();
        Console.WriteLine("1 + 3 = " + adder.Add(1, 3));
    }
}
