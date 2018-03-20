cmake_minimum_required(VERSION 3.1)

project(game)

set(CMAKE_CXX_STANDARD 14)

include_directories(Units Creators FractionBuilders)
add_executable(game main.cpp)

add_subdirectory(Units)
add_subdirectory(Creators)
add_subdirectory(FractionBuilders)
target_link_libraries(game Units Creators FractionBuilders) 