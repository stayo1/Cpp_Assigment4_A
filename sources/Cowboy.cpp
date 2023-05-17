#include "Cowboy.hpp"
using namespace std;
namespace ariel
{
    Cowboy::Cowboy(string name, Point location)
        : Character(name, location, 110), bullets(6) {}

    void Cowboy::shoot(Character *a)
    {
        return;
    }

    bool Cowboy::hasboolets()
    {
        return true;
    }

    void Cowboy::reload()
    {
        return;
    }
}
