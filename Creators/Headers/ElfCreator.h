#pragma once

#include <memory>
#include "UnitCreator.h"
#include "Elf.h"

class ElfCreator : public UnitCreator<Elf> {
public:
  std::unique_ptr<Elf> create_unit() const override;
};