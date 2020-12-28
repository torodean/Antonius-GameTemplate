//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_REPUTATIONBASE_H
#define GAMEENGINE_REPUTATIONBASE_H

class ReputationBase
{
public:

    /// Main constructor for the ReputationBase object.
    ReputationBase() = default;

    /// Main destructor for a ReputationBase object.
    ~ReputationBase() = default;

    /// An enum object to store the types of reputations available.
    enum ReputationType
    {
        HUMANREP,
        DWARFREP,
        WOODELFREP,
        HIGHELFREP,
        NIGHTELFREP,
        GNOMEREP,
        TROLLREP,
    };

    enum ReputationLevel
    {
        HATED,
        NEUTRAL,
        FRIENDLY,
        RESPECTED,
        HONORED,
        REVERED,
        EXALTED
    };

private:
    ReputationType reputationType{};
};

#endif //GAMEENGINE_REPUTATIONBASE_H
