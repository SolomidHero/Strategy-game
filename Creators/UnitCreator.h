#pragma once

#include <memory>
#include "../Units/UnitInterface.h"

template<class UnitClass>
class UnitCreator {
 public:
  std::unique_ptr<UnitClass> render_unit();
  virtual std::unique_ptr<UnitClass> create_unit() const = 0;
}; 

#include "UnitCreator.hpp"