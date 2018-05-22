#include "Game.h"
#include <vector>

using std::cout;
using std::cin;

void Game::create() {
  std::shared_ptr<Player> MainPlayer (new Player());
  players.push_back(std::move(MainPlayer));

  HighElvesBuilder Elfheim;
  app.set_builder(&Elfheim);
  cout << "Choose race or unit.\n 1. Elf\n 2. Healer\n 3. Warrior\n 4. Mage\n 5. Archmage\n";

  // bool flag = true;
  // while(flag) {
  //   int cmd;
  //   cin >> cmd;
    // switch (cmd) {
    //   case 1:
    //     players[0]->add_unit(app.create_elf());
    //     break;
    //   case 2:
    //     players[0]->add_unit(app.create_healer());
    //     break;
    //   case 3:
    //     players[0]->add_unit(app.create_warrior());
    //     break;
    //   case 4:
    //     players[0]->add_unit(app.create_mage());
    //     break;
    //   case 5:
    //     players[0]->add_unit(app.create_archmage());
    //     break;
    //   default:
    //     flag = false;
    //     break;
    // }
  // }

  // std::unique_ptr<Player> Enemy (new Player());
  // players.push_back(std::move(Enemy));
  // int frag_num = rand() % EnemyMaxAmount;

  // for (int i = 0; i < frag_num; ++i) {
  //   int cmd = rand() % 5 + 1;
  //   switch (cmd) {
  //     case 1:
  //       players[1]->add_unit(app.create_elf());
  //       break;
  //     case 2:
  //       players[1]->add_unit(app.create_healer());
  //       break;
  //     case 3:
  //       players[1]->add_unit(app.create_warrior());
  //       break;
  //     case 4:
  //       players[1]->add_unit(app.create_mage());
  //       break;
  //     case 5:
  //       players[1]->add_unit(app.create_archmage());
  //       break;
  //     default:
  //       flag = false;
  //       break;
  //   }
  // }
  // saver = new Snapshot ();
  // State save = { app, players };
  // saver->add_save(&save);
}

void Game::save() {
  State save;
  save.app = app;
  save.players = players;
  saver->add_save(save);
}

void Game::undo() {
  if (!saver->saved_games.empty()) {
    State s = std::move(saver->saved_games[saver->saved_games.size() - 1]);
    app = std::move(s.app);
    players = std::move(s.players);
  }
}