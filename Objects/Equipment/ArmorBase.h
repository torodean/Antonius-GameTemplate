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
        UNKNOWN,
        HEAD,
        NECKLACE,
        SHOULDERS,
        BACK,
        CHEST,
        SHIRT,
        BRACERS,
        HANDS,
        BELT,
        LEGS,
        FEET,
        RINGS,
        TRINKET
    };

protected:

private:
    ArmorType armorType;
};
#endif //GAMEENGINE_ARMORBASE_H
