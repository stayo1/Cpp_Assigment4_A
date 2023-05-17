#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    class Point
    {
    private:
        double x;
        double y;

    public:
        Point();
        Point(double, double);
        double getX();
        void setX(double);
        double getY();
        void setY(double);
        double distance(Point);
        string print();
        static Point moveTowards(Point, Point, double);
    };
}
