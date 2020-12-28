//
// Created by d0sag3 on 12/27/2020.
//

#ifndef GAMEENGINE_WEAPONSKILL_H
#define GAMEENGINE_WEAPONSKILL_H

#include "SkillBase.h"

/**
 * This is the base class for all weapon skills. These are all skills associated with learning to be proficient in using
 * various weapons and items for fighting.
 */
class WeaponSkill : public SkillBase
{
public:

    /// Main constructor for a WeaponSkill object.
    WeaponSkill() : weaponSkillType(UNKNOWNSKILL), weaponSkillName("Unknown") {};

    explicit WeaponSkill(std::string skillName);

    /// Main destructor for a WeaponSkill object.
    ~WeaponSkill() = default;

protected:

    /// This is an enum for each type of weapon skill.
    enum WeaponSkillType
    {
        UNKNOWNSKILL = -1,
        UNARMED = 0,
        ONEHANDEDSWORDS = 1,
        TWOHANDEDSWORDS = 2,
        DAGGERS = 3,
        ONEHANDEDAXES = 4,
        TWOHANDEDAXES = 5,
        ONEHANDEDMACES = 6,
        TWOHANDEDMACES = 7,
        STAVES = 8,
        POLEARMS = 9,
        FISTWEAPONS = 10,
        FISHINGPOLES = 11,
        STONES = 12,
        BOWS = 13,
        CROSSBOWS = 14,
        RIFLES = 15,
        PISTOLS = 16,
        THROWINGKNIVES = 17,
        THROWINGSTARS = 18,
        DARTS = 19,
        SLINGS = 20
    };

    /**
     * This will convert the WeaponSkill::WeaponSkillType to a readable string representation.
     * @param type (WeaponSkill::WeaponSkillType) - Type to convert.
     * @return (std::string) - Human readable output string representing the WeaponSkill::WeaponSkillType
     */
    static std::string typeToName(WeaponSkillType type);

    /**
     * This will convert an std::string typeName to a WeaponSkill::WeaponSkillType.
     * @param name (std::string) - The name of the skill to convert
     * @return (WeaponSkill::WeaponSkillType) - The WeaponSkillType enum.
     */
    static WeaponSkillType nameToType(const std::string& name);

private:

    WeaponSkillType weaponSkillType;
    std::string weaponSkillName;

};

#endif //GAMEENGINE_WEAPONSKILL_H