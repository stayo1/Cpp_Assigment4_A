#pragma once
#include "Character.hpp"

constexpr int YOUNG_HEALTH = 100;
constexpr int TRAINED_HEALTH = 120;
constexpr int OLD_HEALTH = 150;
constexpr int YOUNG_SPEED = 14;
constexpr int TRAINED_SPEED = 12;
constexpr int OLD_SPEED = 8;

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(string, Point, int, int);
        void move(Character *);
        void slash(Character *);
    };

    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(string name, Point location)
            : Ninja(std::move(name), location, YOUNG_HEALTH, YOUNG_SPEED) {}
    };

    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(string name, Point location)
            : Ninja(std::move(name), location, TRAINED_HEALTH, TRAINED_SPEED) {}
    };

    class OldNinja : public Ninja
    {
    public:
        OldNinja(string name, Point location)
            : Ninja(std::move(name), location, OLD_HEALTH, OLD_SPEED) {}
    };
}