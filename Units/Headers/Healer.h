#pragma once

#include "Elf.h"
#include <iostream>

struct Heal {
  int pt = 0;
  int portions = 0;
};

class Healer : virtual public Elf {
public:
  std::string quote() const;
  
  void set_heal(int pt, int portions);

  Heal& get_heal();

  void heal_unit();
  template<class UnitClass>
  void heal_unit(std::unique_ptr<UnitClass>& unit);
private:
  Heal heal;
};


template<class UnitClass>
void Healer::heal_unit(std::unique_ptr<UnitClass>& unit) {
  Heal& heal = get_heal();
  Health& hp = unit->get_hp();
  if (heal.portions != 0) {
    int delta = (hp.current + heal.pt > hp.max)? hp.max - hp.current : heal.pt;
    std::cout << "I heal for " << delta << " hp!3" << std::endl;
    heal.portions--;
    hp.current += delta;
  } else {
    std::cout << "I can't heal!" << std::endl;
  }
}