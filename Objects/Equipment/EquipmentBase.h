//
// Created by d0sag3 on 12/28/2020.
//

#ifndef GAMEENGINE_EQUIPMENTBASE_H
#define GAMEENGINE_EQUIPMENTBASE_H

#include <string>
#include "../../Logistics/Currency.h"

/**
 * This is a base class for any equipment object. This includes all armor, trinkets, rings, weapons, and wearable items.
 */
class EquipmentBase
{
public:

    /// Main default constructor for an EquipmentBase object.
    EquipmentBase() = default;

    /// Main destructor for an EquipmentBase object.
    ~EquipmentBase() = default;

    /// The various types of equipment.
    enum EquipmentType
    {
        UNKNOWN,
        ARMOR,
        WEAPON,
        OFFHAND,
    };

    enum EquipmentRarity
    {
        JUNK,
        COMMON,
        UNCOMMON,
        RARE,
        EPIC,
        LEGENDARY,
        ARTIFACT,
        CRAFTED
    };

    bool isWeapon() const { return equipmentType == WEAPON; };
    bool isArmor() const { return equipmentType == ARMOR; };

    std::string getName() { return equipmentName; };
    std::string getDescription() { return description; };
    EquipmentRarity getRarity() { return rarity; };
    Currency getSellPrice() { return sellPrice; };
    unsigned int getRequiredLevel() const { return requiredLevel; };

protected:

private:
    std::string equipmentName;
    std::string description;
    EquipmentType equipmentType;
    unsigned int requiredLevel{};
    Currency sellPrice;
    EquipmentRarity rarity;
};

#endif //GAMEENGINE_EQUIPMENTBASE_H
