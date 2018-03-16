#pragma once

#include <string>
struct Health {
  int max = 0;
  int current = 0;
  int regen = 0;
  int armor = 0;
};

struct Attack {
  int low = 0;
  int high = 0;
  std::string type = "";
};

// struct Weapon {
//   int damage = 0;
//   std::string name = "";
//   std::string type = "";
// };

class UnitInterface {
 public:
  // virtual std::string set_weapon(IWeapon* weapon) const = 0;
  virtual std::string quote() const = 0;
  virtual Attack get_attack() const = 0;
  virtual Health get_hp() const = 0;
 private:
};
