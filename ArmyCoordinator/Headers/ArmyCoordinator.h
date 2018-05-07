#pragma once

#include "UnitInterface.h"
#include "Elf.h"
#include "Mage.h"
#include "Healer.h"

#include <memory>
#include <vector>

class Army {
public:
  ~Army();

  void add(std::unique_ptr<UnitInterface>& unit);
  void remove(std::unique_ptr<UnitInterface> unit);

  void heal(std::unique_ptr<UnitInterface>& target);
  void attack(std::unique_ptr<UnitInterface>& target);
  void attack_by_magic(std::unique_ptr<UnitInterface>& target);
private:
  std::vector<std::unique_ptr<UnitInterface>> army;
};