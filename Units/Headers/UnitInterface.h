#pragma once

#include <string>
#include "CharactersConfig.h"
#include "Log.h"

struct Health {
  int current = 0;
  int max = 0;
  int regen = 0;
  int armor = 0;
};

struct Attack {
  int low = 0;
  int high = 0;
  std::string type = "";
};

struct Modificator {
  std::string type = "";
  int value;
};

class UnitInterface {
public:
  virtual std::string quote() const = 0;
  virtual Attack& get_attack() = 0;
  virtual Health& get_hp() = 0;
  virtual int get_id() = 0;
private:
};
