#include "Character.hpp"
using namespace std;
namespace ariel
{
    Character::Character(string name, Point location, int health)
        : name(name), location(location), health(health) {}

    Point Character::getLocation()
    {
        return Point(1.1, 2.2);
    }

    int Character::getHealth()
    {
        return 1;
    }

    string Character::getName()
    {
        return "stav";
    }

    bool Character::isAlive()
    {
        return true;
    }

    double Character::distance(Character *a)
    {
        return 1.1;
    }

    void Character::hit(int a)
    {
        return;
    }

    string Character::print()
    {
        return "";
    }
}
