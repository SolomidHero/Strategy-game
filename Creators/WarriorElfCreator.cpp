#include "../Units/WarriorElf.h"
#include "WarriorElfCreator.h"

std::unique_ptr<UnitInterface> WarriorElfCreator::create_unit() const {
  std::unique_ptr<WarriorElf> ptr(new WarriorElf());
  ptr->set_hp(160, 160, 6);
  ptr->set_attack(6, 10, "melee");
  return std::move(ptr);
}
