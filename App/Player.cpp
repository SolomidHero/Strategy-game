#include "Player.h"
#include <math.h>

double dist(Point& a, Point& b) {
  return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

Player::Player() : gold(DefaultGoldAmount), capacity(DefaultCapacity) {}

void Player::move(Point a) {
  spot = a;
}

void Player::add_unit(std::unique_ptr<UnitInterface>& unit) {
  army.add(unit);
}
