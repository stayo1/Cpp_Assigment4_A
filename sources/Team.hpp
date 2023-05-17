#pragma once
#include <vector>
#include <iostream>
#include "Ninja.hpp"
#include "Cowboy.hpp"

using namespace std;

namespace ariel
{
    class Team
    {
    private:
        vector<Character *> warriors;
        Character *leader;

    public:
        Team(Character *);
        void add(Character *);
        void attack(Team *);
        int stillAlive();
        string print();
    };
};
