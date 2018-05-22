cmake_minimum_required(VERSION 3.1)

project(App)

add_library(App Game.cpp Command.cpp Snapshot.cpp Player.cpp)