#pragma once

#include "ElfCreator.h"
#include "../Units/Healer.h"

class HealerCreator : public UnitCreator<Healer> {
public:
  std::unique_ptr<Healer> render_unit();
  std::unique_ptr<Healer> create_unit() const override;
};