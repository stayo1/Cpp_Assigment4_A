#include "Ninja.hpp"
#include "Character.hpp"

namespace ariel
{
    Ninja::Ninja(string name, Point location, int health, int speed)
        : Character(name, location, health), speed(speed) {}

    void Ninja::move(Character *a)
    {
        return;
    }

    void Ninja::slash(Character *b)
    {
        return;
    }
}
