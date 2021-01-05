//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_CHARACTERBASE_H
#define GAMEENGINE_CHARACTERBASE_H

#include <string>
#include <map>
#include "../Logistics/StatBlock.h"

class CharacterBase
{
public:

    /// Main constructor for a base character object.
    CharacterBase() = default;

    /// Main destructor for a base character object.
    ~CharacterBase() = default;

protected:

private:

    std::string characterName;
    StatBlock stats;

};

#endif //GAMEENGINE_CHARACTERBASE_H
