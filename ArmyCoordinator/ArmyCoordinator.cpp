#include "ArmyCoordinator.h"
#include <iostream>

template <typename To, typename From, typename Deleter> 
std::unique_ptr<To, Deleter> dynamic_unique_cast(std::unique_ptr<From, Deleter>&& p) {
  if (To* cast = dynamic_cast<To*>(p.get())) {
    std::unique_ptr<To, Deleter> result(cast, std::move(p.get_deleter()));
    p.release();
    return result;
  }
  return std::unique_ptr<To, Deleter>(nullptr, p.get_deleter());
}

Army::~Army() {
  for (auto it = army.begin(); it != army.end(); it++) {
    (*it).release();
  }
}

void Army::add(std::unique_ptr<UnitInterface>& unit) {
  army.push_back(std::move(unit));
}

void Army::remove(std::unique_ptr<UnitInterface> unit) {
  for (auto it = army.begin(); it != army.end(); it++) {
    if (*it == unit) {
      army.erase(it);
    }
  }
}

void Army::heal(std::unique_ptr<UnitInterface>& target) {
  for (auto it = army.begin(); it != army.end(); it++) {
    if (auto pb = dynamic_unique_cast<Healer>(std::move(*it))) {
      pb->heal_unit(target);
      *it = dynamic_unique_cast<UnitInterface>(std::move(pb));
    }
  }
}

void Army::attack(std::unique_ptr<UnitInterface>& target) {
  for (auto it = army.begin(); it != army.end(); it++) {
    if (auto pb = dynamic_unique_cast<Elf>(std::move(*it))) {
      pb->attack_unit(target);
      *it = dynamic_unique_cast<UnitInterface>(std::move(pb));
    }
  }
}

void Army::attack_by_magic(std::unique_ptr<UnitInterface>& target) {
  for (auto it = army.begin(); it != army.end(); it++) {
    if (auto pb = dynamic_unique_cast<Mage>(std::move(*it))) {
      pb->attack_unit_by_magic(target);
      *it = dynamic_unique_cast<UnitInterface>(std::move(pb));
    }
  }
}
