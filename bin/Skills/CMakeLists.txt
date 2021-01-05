
set(SKILLS_SRC SkillBase.cpp WeaponSkill.cpp)
set(SKILLS_HDR SkillBase.h WeaponSkill.h)

add_library(SKILLS_LIB "${SKILLS_SRC};${SKILLS_HDR}")
