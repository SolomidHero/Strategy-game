#include <iostream>
#include <vector>
#include <assert.h>

#include "director.h"
#include "HighElvesBuilder.h"

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


int main() {

  director app;
  HighElvesBuilder Elfheim;
  app.set_builder(&Elfheim);

  std::unique_ptr<Elf> Brad = app.render_elf();

  std::unique_ptr<WarriorElf> John = app.render_warrior();
  John->heal_unit();
  John->heal_unit();
  John->heal_unit();
  John->heal_unit();

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