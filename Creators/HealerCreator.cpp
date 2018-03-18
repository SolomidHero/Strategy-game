#include "HealerCreator.h"
#include "../Units/Healer.h"
#include <iostream>

std::unique_ptr<Healer> HealerCreator::create_unit() const {
  std::unique_ptr<Healer> ptr (new Healer());
  ptr->set_hp(103, 120, 6);
  ptr->set_attack(4, 6, "melee");
  ptr->set_heal(10, -1);
  return std::move(ptr);
}

std::unique_ptr<Healer> HealerCreator::render_unit() {
  std::unique_ptr<Healer> ptr = UnitCreator<Healer>::render_unit();
  Heal heal = std::move(ptr)->get_heal();
  std::cout << heal.pt << " and ";
  if (heal.portions < 0) 
    std::cout << "infinity charges" << std::endl;
  else
    std::cout << heal.portions << " charges" << std::endl;
  return ptr;
}
