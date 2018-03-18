#pragma once

#include "HealerCreator.h"
#include "../Units/WarriorElf.h"

class WarriorElfCreator : public UnitCreator<WarriorElf> {
public:
  std::unique_ptr<WarriorElf> render_unit();
  std::unique_ptr<WarriorElf> create_unit() const override;
};