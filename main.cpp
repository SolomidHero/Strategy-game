#include <iostream>
#include <vector>
#include <assert.h>

#include "director.h"
#include "HighElvesBuilder.h"

#include "Log.h"

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

#include "CharactersConfig.h"

int main() {
  std::srand(std::time (nullptr));

  director app;
  HighElvesBuilder Elfheim;
  app.set_builder(&Elfheim);

  std::unique_ptr<UnitInterface> Brad (app.create_elf());
  std::cout << Brad->get_id() << " " << std::endl;
  std::unique_ptr<UnitInterface> Peter (app.create_elf());
  std::cout << Peter->get_id() << " " << std::endl;
  std::unique_ptr<UnitInterface> Gven (app.create_healer());
  std::cout << Gven->get_id() << " " << std::endl;
  std::unique_ptr<UnitInterface> Ody (app.create_elf());
  std::cout << Ody->get_id() << " " << std::endl;
  std::unique_ptr<UnitInterface> Sam (app.create_mage());
  std::cout << Sam->get_id() << " " << std::endl;
  std::unique_ptr<UnitInterface> Kate (app.create_archmage());
  std::cout << Kate->get_id() << " " << std::endl;

  Army gang_bang;
  gang_bang.add(Brad);
  gang_bang.add(Peter);
  gang_bang.add(Gven);
  gang_bang.add(Ody);
  gang_bang.add(Sam);
  gang_bang.add(Kate);


  std::unique_ptr<UnitInterface> Bill = app.render_elf();
  std::cout << Bill->get_id() << std::endl;

  gang_bang.attack(Bill);
  gang_bang.attack_by_magic(Bill);
  gang_bang.attack(Bill);
  gang_bang.heal(Bill);
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
  std::cout << "__________________________" << std::endl;
  Log::get_log_object().log();
  std::cout << "ok" << std::endl;
  return 0;
}