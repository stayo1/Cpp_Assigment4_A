#pragma once
#include <vector>
#include "Character.hpp"
using namespace std;

namespace ariel
{
    class SmartTeam
    {
    private:
        vector<Character *> warriors;
        Character *leader;

    public:
        SmartTeam(Character *);
        void add(Character *);
        void attack(SmartTeam *);
        int stillAlive();
        string print();
    };
};
