namespace TestMathzApp;

using MathzApp;

public class MathzTests
{
    [Fact]
    public void TestAdd()
    {
        var math = new Mathz();
        var result = math.Add(0, 0);
        var expected = 0;
        Assert.Equal(expected, result);
    }

    [Fact]
    public void TestGreaterOrEqual()
    {
        var math = new Mathz();
        Assert.Equal(true, math.GreaterOrEqual(1, 1));
    }
}
