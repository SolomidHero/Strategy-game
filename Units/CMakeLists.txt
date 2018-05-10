cmake_minimum_required(VERSION 3.1)

project(Units)

set(SOURCE Elf.cpp UnitInterface.cpp Healer.cpp WarriorElf.cpp Mage.cpp Archmage.cpp)

add_library(Units ${SOURCE})