cmake_minimum_required(VERSION 3.16)
project(GameEngine VERSION 0.0.1 LANGUAGES CXX)

# Sets the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/mingw81_64")
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Include subdirectories.
add_subdirectory(Characters)
add_subdirectory(Classes)
add_subdirectory(Editor)
add_subdirectory(Effects)
add_subdirectory(Logistics)
add_subdirectory(Objects)
add_subdirectory(Professions)
add_subdirectory(Races)
add_subdirectory(Skills)
add_subdirectory(Toolkit)

add_executable(GameEngine main.cpp)