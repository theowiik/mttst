namespace TestMathLib;

using MathLib;

public class MathLibTests
{
    [Fact]
    public void TestAdd()
    {
        var add = new Addition();
        var result = add.Add(0, 0);
        var expected = 0;
        Assert.Equal(expected, result);

        add = new Addition();
        result = add.Add(1, 1);
        expected = 2;
        Assert.Equal(expected, result);
    }

    [Fact]
    public void TestAddPositive()
    {
        var add = new Addition();
        var result = add.Add(1, 1);
        var expected = 2;
        Assert.Equal(expected, result);
    }
}
