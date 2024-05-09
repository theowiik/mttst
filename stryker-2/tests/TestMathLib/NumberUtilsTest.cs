namespace TestMathLib;

using MathLib.Util;

public class NumberUtilsTest
{
    [Fact]
    public void IsValidInteger_WithValidInteger_ReturnsTrue()
    {
        var input = "123";
        var result = NumberUtils.IsValidInteger(input);
        Assert.True(result);
    }

    [Fact]
    public void IsValidInteger_WithInvalidInteger_ReturnsFalse()
    {
        var input = "abc";
        var result = NumberUtils.IsValidInteger(input);
        Assert.False(result);
    }

    [Theory]
    [InlineData(1, "1st")]
    [InlineData(2, "2nd")]
    [InlineData(3, "3rd")]
    [InlineData(4, "4th")]
    [InlineData(21, "21st")]
    [InlineData(22, "22nd")]
    [InlineData(23, "23rd")]
    [InlineData(111, "111th")]
    [InlineData(112, "112th")]
    [InlineData(113, "113th")]
    public void ToOrdinal_WithVariousNumbers_ReturnsCorrectOrdinal(int number, string expected)
    {
        var result = NumberUtils.ToOrdinal(number);
        Assert.Equal(expected, result);
    }

    [Fact]
    public void FormatWithCommas_WithInteger_ReturnsFormattedString()
    {
        var number = 1000000;
        var result = NumberUtils.FormatWithCommas(number);
        Assert.Equal("1,000,000", result);
    }
}
