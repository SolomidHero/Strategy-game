#pragma once

#include <memory>
#include "UnitCreator.h"
#include "../Units/Archmage.h"

class ArchmageCreator : public UnitCreator<Archmage> {
public:
  std::unique_ptr<Archmage> render_unit();
  std::unique_ptr<Archmage> create_unit() const override;
};