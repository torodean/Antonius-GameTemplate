//
// Created by d0sag3 on 12/27/2020.
//

#include "WeaponSkill.h"


WeaponSkill::WeaponSkill(std::string skillName) : weaponSkillName(std::move(skillName)),
                                                  weaponSkillType(nameToType(skillName))
{

}

std::string WeaponSkill::typeToName(WeaponSkill::WeaponSkillType type)
{
    switch (type)
    {
        case UNARMED: return "Unarmed";
        case ONEHANDEDSWORDS: return "One Handed Swords";
        case TWOHANDEDSWORDS: return "Two Handed Swords";
        case DAGGERS: return "Daggers";
        case ONEHANDEDAXES: return "One Handed Axes";
        case TWOHANDEDAXES: return "Two Handed Axes";
        case ONEHANDEDMACES: return "One Handed Maces";
        case TWOHANDEDMACES: return "Two Handed Maces";
        case STAVES: return "Staves";
        case POLEARMS: return "Polearms";
        case FISTWEAPONS: return "Fist Weapons";
        case FISHINGPOLES: return "Fishing Poles";
        case STONES: return "Stones";
        case BOWS: return "Bows";
        case CROSSBOWS: return "Crossbows";
        case RIFLES: return "Rifles";
        case PISTOLS: return "Pistols";
        case THROWINGKNIVES: return "Throwing Knives";
        case THROWINGSTARS: return "Throwing Stars";
        case DARTS: return "Darts";
        case SLINGS: return "Slings";
        case UNKNOWNSKILL:
        default: return "Unknown";
    }
}

WeaponSkill::WeaponSkillType WeaponSkill::nameToType(const std::string& name) {
    if(name == "Unarmed")
    {
        return UNARMED;
    }
    else if(name == "One Handed Swords")
    {
        return ONEHANDEDSWORDS;
    }
    else if(name == "Two Handed Swords")
    {
        return TWOHANDEDSWORDS;
    }
    else if(name == "Daggers")
    {
        return DAGGERS;
    }
    else if(name == "One Handed Axes")
    {
        return ONEHANDEDAXES;
    }
    else if(name == "Two Handed Axes")
    {
        return TWOHANDEDAXES;
    }
    else if(name == "One Handed Maces")
    {
        return ONEHANDEDMACES;
    }
    else if(name == "Two Handed Maces")
    {
        return TWOHANDEDMACES;
    }
    else if(name == "Staves")
    {
        return STAVES;
    }
    else if(name == "Polearms")
    {
        return POLEARMS;
    }
    else if(name == "Fist Weapons")
    {
        return FISTWEAPONS;
    }
    else if(name == "Fishing Poles")
    {
        return FISHINGPOLES;
    }
    else if(name == "Stones")
    {
        return STONES;
    }
    else if(name == "Bows")
    {
        return BOWS;
    }
    else if(name == "Crossbows")
    {
        return CROSSBOWS;
    }
    else if(name == "Rifles")
    {
        return RIFLES;
    }
    else if(name == "Pistols")
    {
        return PISTOLS;
    }
    else if(name == "Throwing Knives")
    {
        return THROWINGKNIVES;
    }
    else if(name == "Throwing Stars")
    {
        return THROWINGSTARS;
    }
    else if(name == "Darts")
    {
        return DARTS;
    }
    else if(name == "Slings")
    {
        return SLINGS;
    }
    else
    {
        return UNKNOWNSKILL;
    }
}
