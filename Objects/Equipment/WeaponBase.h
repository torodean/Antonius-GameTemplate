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
        UNKNOWNTYPE = -1,
        UNARMED = 0,
        ONEHANDEDSWORD = 1,
        TWOHANDEDSWORD = 2,
        DAGGER = 3,
        ONEHANDEDAXE = 4,
        TWOHANDEDAXE = 5,
        ONEHANDEDMACE = 6,
        TWOHANDEDMACE = 7,
        STAFF = 8,
        POLEARM = 9,
        FISTWEAPON = 10,
        FISHINGPOLE = 11,
        STONE = 12,
        BOW = 13,
        CROSSBOW = 14,
        RIFLE = 15,
        PISTOL = 16,
        THROWINGKNIFE = 17,
        THROWINGSTAR = 18,
        DART = 19,
        SLING = 20
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
