namespace TestMathLib;

using MathLib;

public class VectorTests
{
    [Fact]
    public void Add_TwoVectors_ShouldReturnCorrectSum()
    {
        var vector1 = new Vector(1, 2);
        var vector2 = new Vector(3, 4);
        var result = vector1.Add(vector2);
        Assert.Equal(4, result.X);
        Assert.Equal(6, result.Y);
    }

    [Fact]
    public void Subtract_TwoVectors_ShouldReturnCorrectDifference()
    {
        var vector1 = new Vector(5, 7);
        var vector2 = new Vector(2, 3);
        var result = vector1.Subtract(vector2);
        Assert.Equal(3, result.X);
        Assert.Equal(4, result.Y);
    }

    [Fact]
    public void Magnitude_SingleVector_ShouldReturnCorrectMagnitude()
    {
        var vector = new Vector(3, 4);
        var magnitude = vector.Magnitude();
        Assert.Equal(5, magnitude);
    }
}
