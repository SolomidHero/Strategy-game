#include "HighElvesBuilder.h"

//create
std::unique_ptr<Elf> HighElvesBuilder::create_elf() {
  return Elfguard.create_unit();
}

std::unique_ptr<Healer> HighElvesBuilder::create_healer() {
  return KnowledgeTree.create_unit();
}

std::unique_ptr<WarriorElf> HighElvesBuilder::create_warrior() {
  return Casarm.create_unit();
}

std::unique_ptr<Mage> HighElvesBuilder::create_mage() {
  return MageHill.create_unit();
}

std::unique_ptr<Archmage> HighElvesBuilder::create_archmage() {
  return MagicTower.create_unit();
}
//render
std::unique_ptr<Elf> HighElvesBuilder::render_elf() {
  return Elfguard.render_unit();
}

std::unique_ptr<Healer> HighElvesBuilder::render_healer() {
  return KnowledgeTree.render_unit();
}

std::unique_ptr<WarriorElf> HighElvesBuilder::render_warrior() {
  return Casarm.render_unit();
}

std::unique_ptr<Mage> HighElvesBuilder::render_mage() {
  return MageHill.render_unit();
}

std::unique_ptr<Archmage> HighElvesBuilder::render_archmage() {
  return MagicTower.render_unit();
}