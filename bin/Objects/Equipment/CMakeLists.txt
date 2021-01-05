
set(EQUIPMENT_SRC EquipmentBase.cpp WeaponBase.cpp ArmorBase.cpp)
set(EQUIPMENT_HDR EquipmentBase.h WeaponBase.h ArmorBase.h)

add_library(EQUIPMENT_LIB "${EQUIPMENT_SRC};${EQUIPMENT_HDR}")
