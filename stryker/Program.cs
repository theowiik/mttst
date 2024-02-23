namespace stryker;

class Program
{
    static void Main(string[] args)
    {
        var m = new Mathz();
        Console.WriteLine("1 + 3 = " + m.Add(1, 3));
    }
}
