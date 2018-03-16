#pragma once

#include "Elf.h"

class WarriorElf : public Elf {
  public:
    std::string quote() const;
};