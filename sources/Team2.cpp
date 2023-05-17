#include "Team2.hpp"
using namespace std;

namespace ariel
{
    Team2::Team2(Character *leader)
        : leader(leader) { warriors.push_back(leader); }

    void Team2::add(Character *a)
    {
        return;
    }

    void Team2::attack(Team2 *b)
    {
        return;
    }

    int Team2::stillAlive()
    {
        return 1;
    }

    string Team2::print()
    {
        return "";
    }
}
