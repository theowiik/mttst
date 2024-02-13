#include "mathz.cpp"

const double pi = 3.14159;

class Geometry
{
public:
    static double circle_area(const double radius)
    {
        auto m = Mathz();
        const double pi = 3.14159;
        return m.multiply(m.multiply(radius, radius), pi);
    }

    static double triangle_area(const double base, const double height)
    {
        auto m = Mathz();
        const double divide_by = 2;

        return m.divide(m.multiply(base, height), 2);
    }

    static bool same_rectangle_area(const double r1h, const double r1w, const double r2h, const double r2w)
    {
        auto m = Mathz();
        const double r1_area = m.multiply(r1h, r1w);
        const double r2_area = m.multiply(r2h, r2w);

        return m.greater_or_equal(r1_area, r2_area) && m.less_or_equal(r1_area, r2_area);
    }
};
