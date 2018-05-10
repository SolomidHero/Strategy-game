#pragma once

#include "IBuilder.h"

#include "ElfCreator.h"
#include "WarriorElfCreator.h"
#include "HealerCreator.h"
#include "MageCreator.h"
#include "ArchmageCreator.h"

#include "Elf.h"
#include "WarriorElf.h"
#include "Healer.h"
#include "Mage.h"
#include "Archmage.h"

class HighElvesBuilder : public IBuilder {
public:
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
  ElfCreator Elfguard;
  HealerCreator KnowledgeTree;
  WarriorElfCreator Casarm;
  MageCreator MageHill;
  ArchmageCreator MagicTower;
};