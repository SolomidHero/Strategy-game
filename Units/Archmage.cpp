#include "Archmage.h"

std::string Archmage::quote() const {
  return "CAN U SEE THE TRUE POWER!";
}

Attack& Archmage::get_attack() {
  return Healer::get_attack();
}

Health& Archmage::get_hp() {
  return Healer::get_hp();
}