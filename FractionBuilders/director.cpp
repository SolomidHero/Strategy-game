#include "director.h"

// create
std::unique_ptr<Elf> director::create_elf() {
  return fraction_builder->create_elf();
}

std::unique_ptr<Healer> director::create_healer() {
  return fraction_builder->create_healer();
}

std::unique_ptr<WarriorElf> director::create_warrior() {
  return fraction_builder->create_warrior();
}

std::unique_ptr<Mage> director::create_mage() {
  return fraction_builder->create_mage();
}

std::unique_ptr<Archmage> director::create_archmage() {
  return fraction_builder->create_archmage();
}

// render
std::unique_ptr<Elf> director::render_elf() {
  return fraction_builder->render_elf();
}

std::unique_ptr<Healer> director::render_healer() {
  return fraction_builder->render_healer();
}

std::unique_ptr<WarriorElf> director::render_warrior() {
  return fraction_builder->render_warrior();
}

std::unique_ptr<Mage> director::render_mage() {
  return fraction_builder->render_mage();
}

std::unique_ptr<Archmage> director::render_archmage() {
  return fraction_builder->render_archmage();
}