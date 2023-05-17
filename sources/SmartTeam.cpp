#include "SmartTeam.hpp"
using namespace std;

namespace ariel
{
    SmartTeam::SmartTeam(Character *leader)
        : leader(leader) { warriors.push_back(leader); }

    void SmartTeam::add(Character *a)
    {
        return;
    }

    void SmartTeam::attack(SmartTeam *b)
    {
        return;
    }

    int SmartTeam::stillAlive()
    {
        return 1;
    }

    string SmartTeam::print()
    {
        return "";
    }
}
