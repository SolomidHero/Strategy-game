#include <iostream>
#include <vector>
#include <assert.h>

#include "./FractionBuilders/director.h"
#include "./FractionBuilders/HighElvesBuilder.h"

#include "./Creators/ElfCreator.h"
#include "./Creators/WarriorElfCreator.h"
#include "./Creators/HealerCreator.h"
#include "./Creators/MageCreator.h"
#include "./Creators/ArchmageCreator.h"

#include "./Units/Elf.h"
#include "./Units/WarriorElf.h"
#include "./Units/Healer.h"
#include "./Units/Mage.h"
#include "./Units/Archmage.h"


int main() {

  director app;
  HighElvesBuilder Elfheim;
  app.set_builder(&Elfheim);

  std::unique_ptr<Elf> Brad = app.render_elf();

  // std::unique_ptr<WarriorElf> John = app.render_warrior();
  // John->heal_unit();
  // John->heal_unit();
  // John->heal_unit();
  // John->heal_unit();

  Brad->get_hp();

  std::unique_ptr<Healer> healer = app.render_healer();
  healer->heal_unit(Brad);
  Brad->get_hp();

  std::unique_ptr<Mage> Adolf = app.render_mage();

  std::unique_ptr<Archmage> Cadence = app.render_archmage();
  Cadence->get_magic();
  Cadence->heal_unit(healer);
  Cadence->heal_unit(healer);
  return 0;
}