#pragma once

#include <memory>
#include "UnitCreator.h"
#include "Mage.h"

class MageCreator : public UnitCreator<Mage> {
public:
  std::unique_ptr<Mage> create_unit() const override;
};