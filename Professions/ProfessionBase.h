//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_PROFESSIONBASE_H
#define GAMEENGINE_PROFESSIONBASE_H

#include <string>

/**
 * This is the base class for a profession object.
 */
class ProfessionBase
{
public:

    /// Main constructor for a base profession object.
    ProfessionBase() = default;

    /// Main destructor for the base profession object.
    ~ProfessionBase() = default;

protected:

private:
    std::string professionName;
    unsigned int skillLevel{};
};

#endif //GAMEENGINE_PROFESSIONBASE_H
