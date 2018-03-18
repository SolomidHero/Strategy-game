#include "MageCreator.h"

std::unique_ptr<Mage> MageCreator::create_unit() const {
  std::unique_ptr<Mage> ptr(new Mage());
  ptr->set_hp(100, 100, 3);
  ptr->set_attack(4, 6, "melee");
  ptr->set_magic(12, 20, "fire");
  return std::move(ptr);
}
