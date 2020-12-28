//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_CHARACTERPLAYER_H
#define GAMEENGINE_CHARACTERPLAYER_H

#include <string>
#include <map>
#include "../Logistics/Currency.h"
#include "../Skills/WeaponSkill.h"
#include "CharacterBase.h"

class CharacterPlayer : public CharacterBase
{
public:

    /// Main constructor for a base character object.
    CharacterPlayer() = default;

    /// Main destructor for a base character object.
    ~CharacterPlayer() = default;

protected:

private:

    Currency currency;
    std::map<WeaponSkill::WeaponSkillType, WeaponSkill> weaponSkills;

};

#endif //GAMEENGINE_CHARACTERPLAYER_H
