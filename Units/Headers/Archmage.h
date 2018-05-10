#pragma once 

#include "Healer.h"
#include "Mage.h"

class Archmage : public Healer, public Mage {
public:
  std::string quote() const;
  Attack& get_attack();
  Health& get_hp();
};