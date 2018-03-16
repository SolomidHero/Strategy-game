#include <iostream>
#include <vector>
#include "./Creators/ElfCreator.h"
#include "./Creators/WarriorElfCreator.h"
#include "./Creators/HealerCreator.h"
#include "./Units/Healer.h"


int main() {
  ElfCreator ElfCity;
  ElfCity.render_unit();

  WarriorElfCreator ElfCasarm;
  ElfCasarm.render_unit();

  HealerCreator KnowledgeTree;
  std::unique_ptr<UnitInterface> healer = KnowledgeTree.render_unit();
  // healer->heal_unit();
  return 0;
}