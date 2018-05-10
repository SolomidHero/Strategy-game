#pragma once

#include "Elf.h"
#include "Healer.h"

class WarriorElf : public Healer {
  public:
    std::string quote() const;
};