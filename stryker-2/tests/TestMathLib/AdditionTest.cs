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
    }
}
