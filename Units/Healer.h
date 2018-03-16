#pragma once

#include "Elf.h"

struct Heal {
  int portions = 0;
  int pt = 0;
};

class Healer : public Elf {
public:
  std::string quote() const;
  void set_heal(int, int);

  Heal get_heal() const;
  void heal_unit();
private:
  Heal heal;
};