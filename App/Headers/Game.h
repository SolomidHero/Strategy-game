#pragma once

#include "director.h"
#include "HighElvesBuilder.h"

#include "Log.h"

#include "ArmyCoordinator.h"
#include "Player.h"
#include "Snapshot.h"

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

class Game {
public:
  void create();
  void save();
  void make_move(Point& move);
  void battle(Player& hero1, Player& hero2);
  void undo(); 

private:
  director app;
  std::vector<std::shared_ptr<Player>> players;
  Snapshot* saver;
};