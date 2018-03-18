#include "ArchmageCreator.h"

std::unique_ptr<Archmage> ArchmageCreator::create_unit() const {
  std::unique_ptr<Archmage> ptr(new Archmage());
  ptr->set_hp(120, 120, 6);
  ptr->set_attack(4, 6, "melee");
  ptr->set_heal(12, -1);
  ptr->set_magic(14, 22, "fire\tthunder\tice");
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
