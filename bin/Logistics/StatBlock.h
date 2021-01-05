//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_STATBLOCK_H
#define GAMEENGINE_STATBLOCK_H

/**
 * This is an object for storing a stat block for a character.
 */
class StatBlock
{
public:

    /// Main constructor for the StatBlock object.
    StatBlock() = default;

    /// Main destructor for the StatBlock object.
    ~StatBlock() = default;

protected:

    struct Resistances
    {
        unsigned int piercing{};
        unsigned int slashing{};
        unsigned int bludgeoning{};
        unsigned int fire{};
        unsigned int frost{};
        unsigned int nature{};
        unsigned int arcane{};
        unsigned int shadow{};
        unsigned int holy{};
    };

    /// An object to hold stats related to defense.
    struct DefensiveStats
    {
        unsigned int armor{};
        unsigned int defense{};
        unsigned int dodge{};
        unsigned int parry{};
        unsigned int block{};
        unsigned int Avoidance{};
        Resistances resistances{};
    };

    /// An object to hold primary stats.
    struct PrimaryStats
    {
        unsigned int level{};
        unsigned int experience{};
        unsigned int health{};
        unsigned int mana{};
        unsigned int chi{};
    };

    /// An object to hold main attribute stats.
    struct AttributeStats
    {
        unsigned int Stamina{};
        unsigned int strength{};
        unsigned int Intellect{};
        unsigned int Agility{};
        unsigned int Spirit{};
    };

    /// An object to hold secondary stats.
    struct SecondaryStats
    {
        unsigned int crit{};
        unsigned int haste{};
        unsigned int mastery{};
        unsigned int versatility{};
        unsigned int power{};
        unsigned int hit{};
        unsigned int speed{};
        unsigned int durability{};
        unsigned int luck{};
    };

private:
    PrimaryStats primaryStats;
    DefensiveStats defensiveStats;
    AttributeStats attributeStats;
    SecondaryStats secondaryStats;
};

#endif //GAMEENGINE_STATBLOCK_H
