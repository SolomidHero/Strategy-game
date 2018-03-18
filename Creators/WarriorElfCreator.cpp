#include "../Units/WarriorElf.h"
#include "WarriorElfCreator.h"

std::unique_ptr<WarriorElf> WarriorElfCreator::create_unit() const {
  std::unique_ptr<WarriorElf> ptr(new WarriorElf());
  ptr->set_hp(160, 160, 6);
  ptr->set_attack(6, 10, "melee");
  ptr->set_heal(15, 3);
  return std::move(ptr);
}

std::unique_ptr<WarriorElf> WarriorElfCreator::render_unit() {
  std::unique_ptr<WarriorElf> ptr = UnitCreator<WarriorElf>::render_unit();
  Heal heal = std::move(ptr)->get_heal();
  std::cout << heal.pt << " and ";
  if (heal.portions < 0) 
    std::cout << "infinity charges" << std::endl;
  else
    std::cout << heal.portions << " charges" << std::endl;
  return ptr;
}