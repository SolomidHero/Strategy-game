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

#include "../Healer.hpp"