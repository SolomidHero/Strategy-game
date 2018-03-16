#pragma once

#include <memory>
#include "../Units/UnitInterface.h"

class UnitCreator {
 public:
  std::unique_ptr<UnitInterface> render_unit();
  virtual std::unique_ptr<UnitInterface> create_unit() const = 0;
}; 