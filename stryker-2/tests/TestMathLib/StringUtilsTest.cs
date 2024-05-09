namespace TestMathLib;

using MathLib.Util;

public class StringUtilsTest
{
    [Theory]
    [InlineData(null, true)]
    [InlineData("", true)]
    [InlineData(" ", false)]
    [InlineData("some text", false)]
    public void IsNullOrEmpty_ShouldReturnExpectedResults(string input, bool expected)
    {
        bool result = StringUtils.IsNullOrEmpty(input);
        Assert.Equal(expected, result);
    }

    [Theory]
    [InlineData(null, null)]
    [InlineData("", "")]
    [InlineData("a", "a")]
    [InlineData("abc", "cba")]
    public void Reverse_ShouldReturnReversedStrings(string input, string expected)
    {
        string result = StringUtils.Reverse(input);
        Assert.Equal(expected, result);
    }

    [Theory]
    [InlineData(null, null)]
    [InlineData("", "")]
    [InlineData("test", "Test")]
    [InlineData("multiple words here", "Multiple Words Here")]
    public void ToTitleCase_ShouldCapitalizeEachWord(string input, string expected)
    {
        string result = StringUtils.ToTitleCase(input);
        Assert.Equal(expected, result);
    }
}
