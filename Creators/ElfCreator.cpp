#include "ElfCreator.h"
#include "../Units/Elf.h"
#include "CharactersConfig.h"

std::unique_ptr<Elf> ElfCreator::create_unit() const {
  std::unique_ptr<Elf> ptr(new Elf());
  ptr->set_hp(ElfHealth, ElfHealth, ElfRegen);
  ptr->set_attack(ElfAttackLow, ElfAttackHigh, MeleeAttack);
  return std::move(ptr);
}
