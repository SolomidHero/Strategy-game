#include <iostream>
#include <typeinfo>

template<class UnitClass>
std::unique_ptr<UnitClass> UnitCreator<UnitClass>::render_unit() {
  std::unique_ptr<UnitClass> hero = std::move(create_unit());
  std::cout << hero->quote() << std::endl;
  Health h = hero->get_hp();
  Attack a = hero->get_attack();
  std::cout << "hp: " << h.current << "/" << h.max << " (" << h.armor << ")" << std::endl;
  std::cout << "attack: "<< a.low << "-" << a.high << " (" << a.type << ")" << std::endl;
  return hero;
}
