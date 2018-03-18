#pragma once

#include "UnitInterface.h"

class Elf : public UnitInterface {
  public:
    std::string quote() const;

    void set_hp(int, int, int);
    void set_attack(int, int, std::string);
    
    Health& get_hp();
    Attack& get_attack();
  private:
    Health hp;
    Attack attack;
};
