#pragma once

#include "Elf.h"

struct Magic {
  int dmg_low = 0;
  int dmg_high = 0;
  std::string type = "";
};

class Mage : virtual public Elf {
public:
  std::string quote() const;

  void set_magic(int, int, std::string);

  Magic& get_magic();

  template<class UnitClass>
  void attack_unit_by_magic(std::unique_ptr<UnitClass>& target);

private:
  Magic magic;
};

#include "../Mage.hpp"