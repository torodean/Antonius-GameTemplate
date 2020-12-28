cmake_minimum_required(VERSION 3.16)
project(GameEngine)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Characters)
add_subdirectory(Classes)
add_subdirectory(Effects)
add_subdirectory(Logistics)
add_subdirectory(Objects)
add_subdirectory(Professions)
add_subdirectory(Races)
add_subdirectory(Skills)
add_subdirectory(Toolkit)

add_executable(GameEngine main.cpp)