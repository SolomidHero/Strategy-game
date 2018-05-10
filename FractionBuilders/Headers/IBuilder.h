#pragma once

#include <memory>
#include "Elf.h"
#include "WarriorElf.h"
#include "Healer.h"
#include "Mage.h"
#include "Archmage.h"

class IBuilder {
public:
  virtual std::unique_ptr<Elf> create_elf() = 0;
  virtual std::unique_ptr<Healer> create_healer() = 0;
  virtual std::unique_ptr<WarriorElf> create_warrior() = 0;
  virtual std::unique_ptr<Mage> create_mage() = 0;
	virtual std::unique_ptr<Archmage> create_archmage() = 0;

  virtual std::unique_ptr<Elf> render_elf() = 0;
  virtual std::unique_ptr<Healer> render_healer() = 0;
  virtual std::unique_ptr<WarriorElf> render_warrior() = 0;
  virtual std::unique_ptr<Mage> render_mage() = 0;
  virtual std::unique_ptr<Archmage> render_archmage() = 0;
};