#pragma once

#include "IBuilder.h"

class director {
public:
  void set_builder(IBuilder* b) {
    fraction_builder = std::move(b);
  }
  std::unique_ptr<Elf> create_elf();
  std::unique_ptr<Healer> create_healer();
  std::unique_ptr<WarriorElf> create_warrior();
  std::unique_ptr<Mage> create_mage();
  std::unique_ptr<Archmage> create_archmage();

  std::unique_ptr<Elf> render_elf();
  std::unique_ptr<Healer> render_healer();
  std::unique_ptr<WarriorElf> render_warrior();
  std::unique_ptr<Mage> render_mage();
  std::unique_ptr<Archmage> render_archmage();
private:
  IBuilder* fraction_builder;
};