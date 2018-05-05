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
private:
  Magic magic;
};