#include "ElfCreator.h"
#include "../Units/Elf.h"

std::unique_ptr<UnitInterface> ElfCreator::create_unit() const {
  std::unique_ptr<Elf> ptr(new Elf());
  ptr->set_hp(100, 100, 3);
  ptr->set_attack(4, 6, "melee");
  return std::move(ptr);
}
