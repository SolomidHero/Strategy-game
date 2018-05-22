#pragma once

#include <vector>
#include <string>

#include "CharactersConfig.h"
#include "ArmyCoordinator.h"

struct Point {
  int x;
  int y;
};

class Player {
public:
  Player();

  void move(Point a);
  void add_unit(std::unique_ptr<UnitInterface>& unit);
private:
  int gold;
  int capacity;
  Point spot;
  Army army;
};