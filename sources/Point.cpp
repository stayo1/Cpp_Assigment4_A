#include "Point.hpp"

namespace ariel
{
    Point::Point(double x, double y)
        : x(x), y(y) {}

    double Point::getX()
    {
        return this->x;
    }

    void Point::setX(double a)
    {
        this->x = a;
    }

    double Point::getY()
    {
        return this->y;
    }

    void Point::setY(double b)
    {
        this->y = b;
    }

    double Point::distance(Point c)
    {
        return 1.1;
    }

    string Point::print()
    {
        return "";
    }

    Point Point::moveTowards(Point a, Point b, double c)
    {
        return Point(1.1, 2.2);
    }
}