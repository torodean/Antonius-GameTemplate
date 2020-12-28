//
// Created by d0sag3 on 12/28/2020.
//

#include "SkillBase.h"

SkillBase::SkillBase(const std::string& skillName) : skillName(skillName),
                                                     skillType(nameToType(skillName))
{

}

SkillBase::SkillType SkillBase::nameToType(const std::string& name) {
    if(name == "melee" || name == "Melee" || name == "MELEE")
    {
        return MELEEWEAPONSKILL;
    }
    else if(name == "ranged" || name == "Ranged" || name == "RANGED")
    {
        return RANGEDWEAPONSKILL;
    }
    else
    {
        return UNKNOWNSKILL;
    }
}

std::string SkillBase::typeToName(SkillBase::SkillType type) {
    switch (type)
    {
        case MELEEWEAPONSKILL: return "Melee";
        case RANGEDWEAPONSKILL: return "Ranged";
        case UNKNOWNSKILL:
        default: return "Unknown";
    }
}
