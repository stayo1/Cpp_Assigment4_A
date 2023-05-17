#pragma once
#include <string>
#include "Point.hpp"
using namespace std;

namespace ariel
{
    class Character
    {
    private:
        Point location;
        int health;
        string name;

    public:
        Character(string, Point, int);
        Point getLocation();
        int getHealth();
        string getName();
        bool isAlive();
        double distance(Character *);
        void hit(int);
        string print();
    };
}