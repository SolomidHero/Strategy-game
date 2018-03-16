#include "HealerCreator.h"
#include "../Units/Healer.h"
#include <iostream>

std::unique_ptr<UnitInterface> HealerCreator::create_unit() const {
  std::unique_ptr<Healer> ptr (new Healer());
  ptr->set_hp(120, 120, 6);
  ptr->set_attack(4, 6, "melee");
  ptr->set_heal(10, -1);
  return std::move(ptr);
}


// void HealerCreator::render_unit() {
//   std::unique_ptr<Healer> ptr = create_unit();
//   Heal heal = std::move(ptr)->get_heal();
//   std::cout << heal.pt << " and " << heal.portions << " charges" << std::endl;
// }
