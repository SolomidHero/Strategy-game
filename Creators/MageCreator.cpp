#include "MageCreator.h"
#include "CharactersConfig.h"

std::unique_ptr<Mage> MageCreator::create_unit() const {
  std::unique_ptr<Mage> ptr(new Mage());
  ptr->set_hp(MageHealth, MageHealth, MageRegen);
  ptr->set_attack(MageAttackLow, MageAttackHigh, MeleeAttack);
  ptr->set_magic(MageMagicDmgLow, MageMagicDmgHigh, "fire");
  return std::move(ptr);
}
