cmake_minimum_required(VERSION 3.1)

project(Creators)

set(SOURCE ElfCreator.cpp UnitCreator.cpp HealerCreator.cpp WarriorElfCreator.cpp MageCreator.cpp ArchmageCreator.cpp)

add_library(Creators ${SOURCE})