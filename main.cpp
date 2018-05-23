#include <iostream>
#include <vector>
#include <assert.h>

#include "Command.h"
#include "Game.h"

int main() {
  std::srand(std::time (nullptr));

  Game game;
  std::vector<std::unique_ptr<Command>> commands;

  commands.push_back(std::unique_ptr<Command> (new CreateGameCommand(&game)));
  commands.push_back(std::unique_ptr<Command> (new MakeMoveCommand(&game)));
  commands.push_back(std::unique_ptr<Command> (new MakeMoveCommand(&game)));
  commands.push_back(std::unique_ptr<Command> (new UndoCommand(&game)));
  commands.push_back(std::unique_ptr<Command> (new SaveGameCommand(&game)));

  for (size_t i = 0; i < commands.size(); ++i) {
    commands[i]->execute();
  }

  std::cout << "__________________________" << std::endl;
  Log::get_log_object().log();
  std::cout << "ok" << std::endl;
  return 0;
}