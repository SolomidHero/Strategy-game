#include <iostream>
#include "UnitCreator.h"

std::unique_ptr<UnitInterface> UnitCreator::render_unit() {
  std::unique_ptr<UnitInterface> hero = create_unit();
  std::cout << hero->quote() << std::endl;
  Health h = hero->get_hp();
  Attack a = hero->get_attack();
  std::cout << "hp: " << h.current << "/" << h.max << " (" << h.armor << ")" << std::endl;
  std::cout << "attack: "<< a.low << "-" << a.high << " (" << a.type << ")" << std::endl;
  return std::move(hero);
}
