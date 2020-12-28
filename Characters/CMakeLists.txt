
set(CHARACTER_SRC CharacterBase.cpp CharacterNPC.cpp CharacterPlayer.cpp)
set(CHARACTER_HDR CharacterBase.h CharacterNPC.h CharacterPlayer.h)

add_library(CHARACTER_LIB "${CHARACTER_SRC};${CHARACTER_HDR}")