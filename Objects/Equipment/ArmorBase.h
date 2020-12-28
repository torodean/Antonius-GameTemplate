//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_ARMORBASE_H
#define GAMEENGINE_ARMORBASE_H

#include "EquipmentBase.h"

class ArmorBase : public EquipmentBase
{
public:

    /// Main default constructor for an ArmorBase object.
    ArmorBase() = default;

    /// Main destructor for an ArmorBase object.
    ~ArmorBase() = default;

    enum ArmorType
    {
        UNKNOWN = -1,
        HEAD = 0,
        NECKLACE = 1,
        SHOULDERS = 2,
        BACK = 3,
        CHEST = 4,
        SHIRT = 5,
        BRACERS = 6,
        HANDS = 7,
        BELT = 8,
        LEGS = 9,
        FEET = 10,
        RINGS = 11,
        TRINKET = 12,
    };

protected:

private:
    ArmorType armorType;
};
#endif //GAMEENGINE_ARMORBASE_H
