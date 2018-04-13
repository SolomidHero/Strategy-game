#include "../Units/WarriorElf.h"
#include "WarriorElfCreator.h"
#include "CharactersConfig.h"

std::unique_ptr<WarriorElf> WarriorElfCreator::create_unit() const {
  std::unique_ptr<WarriorElf> ptr(new WarriorElf());
  ptr->set_hp(WarriorHealth, WarriorHealth, WarriorRegen);
  ptr->set_attack(WarriorAttackLow, WarriorAttackHigh, MeleeAttack);
  ptr->set_heal(WarriorHealValue, WarriorHealCharges);
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