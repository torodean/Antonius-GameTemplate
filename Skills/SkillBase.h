//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_SKILLSBASE_H
#define GAMEENGINE_SKILLSBASE_H

#include <string>

/**
 * This class is a base class for all skills. It provides the basic foundation for items that all skills should contain.
 */
class SkillBase
{
public:

    /// Main constructor for a Skill object.
    SkillBase() : skillType(UNKNOWNSKILL) {};

    /**
     * Constructs a SkillBase object from the skill name.
     * @param skillName is the readable string of the skill type. Valid inputs are "melee" and "ranged".
     */
    explicit SkillBase(const std::string& skillName);

    /// Main destructor for a SkillBase object.
    ~SkillBase() = default;

    /// This is an enum to determine what category of skill is being stored.
    enum SkillType
    {
        UNKNOWNSKILL = -1,
        MELEEWEAPONSKILL = 0,
        RANGEDWEAPONSKILL = 1
    };

    /// Returns the skillLevel for the skill object.
    unsigned int getSkillLevel() const { return skillLevel; };

protected:

    /**
     * This will convert an std::string typeName to a Skill::SkillType.
     * @param name (std::string) - The name of the skill to convert
     * @return (Skill::SkillType) - The SkillType enum.
     */
    static SkillType nameToType(const std::string& name);

    /**
     * This will convert a SkillBase::SkillType enum object to a readable string representation.
     * @param type (SkillBase::SkillType) - The skillType to convert.
     * @return (std::string) - Human readable output string representing the SkillBase::SkillType.
     */
    static std::string typeToName(SkillType type);

    /// Increments the skillLevel by one.
    void IncrementSkillLevel() { skillLevel++; };

private:

    SkillType skillType;        /// The skillType.
    std::string skillName;      /// The name of the skill.
    unsigned int skillLevel{};  /// The level of the skill.

};

#endif //GAMEENGINE_SKILLSBASE_H