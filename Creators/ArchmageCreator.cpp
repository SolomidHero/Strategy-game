#include "ArchmageCreator.h"

std::unique_ptr<Archmage> ArchmageCreator::create_unit() const {
  std::unique_ptr<Archmage> ptr(new Archmage());
  ptr->set_hp(120, 120, 6);
  ptr->set_attack(4, 6, "melee");
  ptr->set_heal(12, -1);
  ptr->set_magic(14, 22, "fire\tthunder\tice");
  return std::move(ptr);
}