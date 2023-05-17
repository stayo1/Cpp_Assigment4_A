#pragma once
#include <vector>
#include "Character.hpp"
using namespace std;

namespace ariel
{
    class Team2
    {
    private:
        vector<Character *> warriors;
        Character *leader;

    public:
        Team2(Character *);
        void add(Character *);
        void attack(Team2 *);
        int stillAlive();
        string print();
    };
};
