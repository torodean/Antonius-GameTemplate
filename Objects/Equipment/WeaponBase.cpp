//
// Created by d0sag3 on 12/28/2020.
//

#include "WeaponBase.h"

bool WeaponBase::isOneHanded() {
    return weaponType == ONEHANDEDSWORD ||
           weaponType == DAGGER ||
           weaponType == ONEHANDEDAXE ||
           weaponType == ONEHANDEDMACE ||
           weaponType == FISTWEAPON ||
           weaponType == STONE ||
           weaponType == PISTOL ||
           weaponType == THROWINGKNIFE ||
           weaponType == THROWINGSTAR ||
           weaponType == DART;
}

bool WeaponBase::isTwoHanded() {
    return weaponType == TWOHANDEDSWORD ||
           weaponType == TWOHANDEDAXE ||
           weaponType == TWOHANDEDMACE ||
           weaponType == STAFF ||
           weaponType == POLEARM ||
           weaponType == FISHINGPOLE ||
           weaponType == BOW ||
           weaponType == CROSSBOW ||
           weaponType == RIFLE ||
           weaponType == SLING;
}

bool WeaponBase::isMelee() {
    return weaponType == UNARMED ||
           weaponType == TWOHANDEDSWORD ||
           weaponType == TWOHANDEDAXE ||
           weaponType == TWOHANDEDMACE ||
           weaponType == STAFF ||
           weaponType == POLEARM ||
           weaponType == FISHINGPOLE ||
           weaponType == ONEHANDEDSWORD ||
           weaponType == DAGGER ||
           weaponType == ONEHANDEDAXE ||
           weaponType == ONEHANDEDMACE ||
           weaponType == FISTWEAPON;
}

bool WeaponBase::isRanged() {
    return weaponType == BOW ||
           weaponType == CROSSBOW ||
           weaponType == RIFLE ||
           weaponType == SLING ||
           weaponType == STONE ||
           weaponType == PISTOL ||
           weaponType == THROWINGKNIFE ||
           weaponType == THROWINGSTAR ||
           weaponType == DART;
}

void WeaponBase::setDamagePerSecond() {
    damagePerSecond = static_cast<float>(
            (damage.damageMax + damage.damageMin)/2.0/damage.speed);
}

std::string WeaponBase::weaponTypeToName(WeaponBase::WeaponType type) {
    switch (type)
    {
        case UNKNOWNTYPE: return "Unknown";
        case UNARMED: return "Unarmed";
        case ONEHANDEDSWORD: return "One-Handed Sword";
        case TWOHANDEDSWORD: return "Two-Handed Sword";
        case DAGGER: return "Dagger";
        case ONEHANDEDAXE: return "One-Handed Axe";
        case TWOHANDEDAXE: return "Two-Handed Axe";
        case ONEHANDEDMACE: return "One-Handed Mace";
        case TWOHANDEDMACE: return "Two-Handed Mace";
        case STAFF: return "Staff";
        case POLEARM: return "Polearm";
        case FISTWEAPON: return "Fist Weapon";
        case FISHINGPOLE: return "Fishing Pole";
        case STONE: return "Stone";
        case BOW: return "Bow";
        case CROSSBOW: return "Crossbow";
        case RIFLE: return "Rifle";
        case PISTOL: return "Pistol";
        case THROWINGKNIFE: return "Throwing Knife";
        case THROWINGSTAR: return "Throwing Star";
        case DART: return "Dart";
        case SLING: return "Sling";
    }
}
