#pragma once

#include "ElfCreator.h"

class HealerCreator : public ElfCreator {
public:
  std::unique_ptr<UnitInterface> create_unit() const override;
};