//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_STATUSEFFECTBASE_H
#define GAMEENGINE_STATUSEFFECTBASE_H

#include <string>
#include "../Toolkit/Time.h"

/**
 * This is hte base class for any status effects. This includes buffs, debuffs, and temporary enhancements.
 */
class StatusEffectBase
{
public:

    /// Main constructor for a base status effect object.
    StatusEffectBase() = default;

    /// Main destructor for a base status effect object.
    ~StatusEffectBase() = default;

protected:

    /// An enum object containing each possible status effect type.
    enum StatusEffectType
    {
        BUFF = 0,
        DEBUFF = 1,
        POISON = 2,
        CURSE = 3,
        DISEASE = 4,
        CONTAGION = 5
    };

private:
    std::string statusEffectName;
    TimeValue duration{};
    StatusEffectType statusEffectType;
};

#endif //GAMEENGINE_STATUSEFFECTBASE_H
