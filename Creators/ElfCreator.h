#pragma once

#include <memory>
#include "UnitCreator.h"

class ElfCreator : public UnitCreator {
 public:
  std::unique_ptr<UnitInterface> create_unit() const override;
};