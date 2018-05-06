#include <iostream>
#include <vector>
#include <assert.h>

#include "director.h"
#include "HighElvesBuilder.h"

#include "ArmyCoordinator.h"

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

  std::srand(std::time (NULL));
  director app;
  HighElvesBuilder Elfheim;
  app.set_builder(&Elfheim);

  std::unique_ptr<UnitInterface> Brad = app.create_elf();
  std::unique_ptr<UnitInterface> Peter = app.create_elf();
  std::unique_ptr<UnitInterface> Gven = app.create_elf();
  std::unique_ptr<UnitInterface> Ody = app.create_elf();
  std::unique_ptr<UnitInterface> Sam = app.create_mage();
  std::unique_ptr<UnitInterface> Kate (app.create_archmage());

  Army guard_bang;
  guard_bang.add(Brad);
  guard_bang.add(Peter);
  guard_bang.add(Gven);
  guard_bang.add(Ody);
  guard_bang.add(Sam);
  guard_bang.add(Kate);


  std::unique_ptr<UnitInterface> Bill = app.render_elf();
  guard_bang.attack_by_magic(Bill);
  guard_bang.attack(Bill);
  Bill->get_hp();

  // std::unique_ptr<WarriorElf> John = app.render_warrior();
  // John->heal_unit();
  // John->heal_unit();
  // John->heal_unit();
  // John->heal_unit();

  // Brad->get_hp();

  // std::unique_ptr<Healer> healer = app.render_healer();
  // healer->heal_unit(Brad);
  // Brad->get_hp();

  // std::unique_ptr<Mage> Adolf = app.render_mage();

  // std::unique_ptr<Archmage> Cadence = app.render_archmage();
  // Cadence->get_magic();
  // Cadence->heal_unit(healer);
  // Cadence->heal_unit(healer);
  // Brad->attack_unit(John);
  // John->get_hp();
  std::cout << "ok" << std::endl;
  return 0;
}