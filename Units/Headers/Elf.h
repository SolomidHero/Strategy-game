#pragma once

#include "UnitInterface.h"
#include <vector>

class Elf : public UnitInterface {
public:
  std::string quote() const;

  void set_hp(int, int, int);
  void set_attack(int, int, std::string);
  void set_modificator(std::string, int);
  
  Health& get_hp();
  Attack& get_attack();
  std::vector<Modificator>& get_modificators();

  template<class UnitClass>
  void attack_unit(std::unique_ptr<UnitClass>& target);

private:
  Health hp;
  Attack attack;
  std::vector<Modificator> mods;
};

#include "../Elf.hpp"