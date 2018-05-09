#include "ArchmageCreator.h"
#include "CharactersConfig.h"

std::unique_ptr<Archmage> ArchmageCreator::create_unit() const {
  std::unique_ptr<Archmage> ptr(new Archmage());
  ptr->set_hp(ArchmageHealth, ArchmageHealth, ArchmageRegen);
  ptr->set_attack(ArchmageAttackLow, ArchmageAttackHigh, MeleeAttack);
  ptr->set_heal(ArchmageHealValue, ArchmageHealCharges);
  ptr->set_magic(ArchmageMagicDmgLow, ArchmageMagicDmgHigh, "fire\tthunder\tice");
  ptr->set_id(IdNum);
  return std::move(ptr);
}

std::unique_ptr<Archmage> ArchmageCreator::render_unit() {
  std::unique_ptr<Archmage> ptr = UnitCreator<Archmage>::render_unit();
  Heal heal = std::move(ptr)->get_heal();
  Magic magic = std::move(ptr)->get_magic();
  std::cout << heal.pt << " and ";
  if (heal.portions < 0) 
    std::cout << "infinity charges" << std::endl;
  else
    std::cout << heal.portions << " charges" << std::endl;
  std::cout << magic.dmg_low << "-" << magic.dmg_high << " by " << magic.type << std::endl;
  return ptr;
}
