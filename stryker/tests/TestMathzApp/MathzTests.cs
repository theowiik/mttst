namespace TestMathzApp;

using MathzApp;

public class MathzTests
{
    [Fact]
    public void TestMethod1()
    {
        var target = new Mathz();
        var result = target.Add(1, 2);
        var expected = 3;
        Assert.Equal(expected, result);
    }
}
