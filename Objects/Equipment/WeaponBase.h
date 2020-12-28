//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_WEAPONBASE_H
#define GAMEENGINE_WEAPONBASE_H

#include "EquipmentBase.h"

/**
 * This is a base object for all weapons.
 */
class WeaponBase : public EquipmentBase
{
public:

    /// Main default constructor for a WeaponBase object.
    WeaponBase() = default;

    /// Main destructor for a WeaponBase object.
    ~WeaponBase() = default;

    unsigned int getDamageMin() const { return damage.damageMin; };
    unsigned int getDamageMax() const { return damage.damageMax; };
    float getDamageSpeed() const { return damage.speed; };
    float getDamagePerSecond() const { return damagePerSecond; };

protected:

    enum WeaponType
    {
        UNKNOWNTYPE,
        UNARMED,
        ONEHANDEDSWORD,
        TWOHANDEDSWORD,
        DAGGER,
        ONEHANDEDAXE,
        TWOHANDEDAXE,
        ONEHANDEDMACE,
        TWOHANDEDMACE,
        STAFF,
        POLEARM,
        FISTWEAPON,
        FISHINGPOLE,
        STONE,
        BOW,
        CROSSBOW,
        RIFLE,
        PISTOL,
        THROWINGKNIFE,
        THROWINGSTAR,
        DART,
        SLING
    };

    /// An object to hold values related to damage for a weapon.
    struct WeaponDamage
    {
        unsigned int damageMin{};
        unsigned int damageMax{};
        float speed{};
    };

    /// Self explanatory methods.
    bool isOneHanded();
    bool isTwoHanded();
    bool isMelee();
    bool isRanged();
    void setDamagePerSecond();

    /**
     * This will convert a WeaponBase::WeaponType enum object to a readable string representation.
     * @param type (WeaponBase::WeaponType) - The skillType to convert.
     * @return (std::string) - Human readable output string representing the SkillBase::SkillType.
     */
    static std::string weaponTypeToName(WeaponType type);

private:
    WeaponType weaponType;
    WeaponDamage damage{};
    float damagePerSecond{};
};

#endif //GAMEENGINE_WEAPONBASE_H
