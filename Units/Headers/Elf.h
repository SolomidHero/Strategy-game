#pragma once

#include "UnitInterface.h"
#include "Log.h"
#include <vector>

class Elf : public UnitInterface {
public:
  std::string quote() const;

  void set_hp(int, int, int);
  void set_attack(int, int, std::string);
  void set_modificator(std::string, int);
  void set_id(int id_num);
  
  Health& get_hp();
  Attack& get_attack();
  std::vector<Modificator>& get_modificators();
  int get_id();

  template<class UnitClass>
  void attack_unit(std::unique_ptr<UnitClass>& target);
  Log log;

private:
  Health hp;
  Attack attack;
  std::vector<Modificator> mods;
  int id;
};

#include "../Elf.hpp"