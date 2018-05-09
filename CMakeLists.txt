cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 14)

project(game)

include_directories(Units/Headers Creators/Headers FractionBuilders/Headers ArmyCoordinator/Headers Logs/Headers)

add_executable(game main.cpp)

add_subdirectory(Units)
add_subdirectory(Creators)
add_subdirectory(FractionBuilders)
add_subdirectory(ArmyCoordinator)
add_subdirectory(Logs)
target_link_libraries(game Units Creators FractionBuilders ArmyCoordinator Logs) 