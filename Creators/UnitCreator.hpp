#include <iostream>
#include <typeinfo>

template<class UnitClass>
std::unique_ptr<UnitClass> UnitCreator<UnitClass>::render_unit() {
  std::unique_ptr<UnitClass> ptr = std::move(create_unit());
  std::cout << ptr->quote() << std::endl;
  Health h = ptr->get_hp();
  Attack a = ptr->get_attack();
  ptr->set_id(IdNum);
  std::cout << "hp: " << h.current << "/" << h.max << " (" << h.armor << ")" << std::endl;
  std::cout << "attack: "<< a.low << "-" << a.high << " (" << a.type << ")" << std::endl;
  return ptr;
}
