#pragma once

#include "ElfCreator.h"

class WarriorElfCreator : public ElfCreator {
public:
  std::unique_ptr<UnitInterface> create_unit() const override;
};