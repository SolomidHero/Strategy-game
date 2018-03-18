#include <iostream>
#include <vector>
#include "./Creators/ElfCreator.h"
#include "./Creators/WarriorElfCreator.h"
#include "./Creators/HealerCreator.h"
#include "./Creators/MageCreator.h"

#include "./Units/Elf.h"
#include "./Units/WarriorElf.h"
#include "./Units/Healer.h"
#include "./Units/Mage.h"


int main() {
  ElfCreator Elfguard;
  std::unique_ptr<Elf> Brad = Elfguard.render_unit();

  WarriorElfCreator Casarm;
  std::unique_ptr<WarriorElf> John = Casarm.render_unit();
  John->heal_unit();
  John->heal_unit();
  John->heal_unit();
  John->heal_unit();


  HealerCreator KnowledgeTree;
  std::unique_ptr<Healer> healer = KnowledgeTree.render_unit();
  healer->heal_unit();
  healer->heal_unit();

  MageCreator MageHill;
  std::unique_ptr<Mage> Adolf = MageHill.render_unit();


  return 0;
}