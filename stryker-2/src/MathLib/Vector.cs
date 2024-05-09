namespace MathLib;

using System;

public class Vector
{
    public double X { get; }
    public double Y { get; }

    public Vector(double x, double y)
    {
        X = x;
        Y = y;
    }

    public Vector Add(Vector other)
    {
        return new Vector(X + other.X, Y + other.Y);
    }

    public Vector Subtract(Vector other)
    {
        return new Vector(X - other.X, Y - other.Y);
    }

    public double Magnitude()
    {
        return Math.Sqrt(X * X + Y * Y);
    }

    public override string ToString()
    {
        return $"({X}, {Y})";
    }
}
