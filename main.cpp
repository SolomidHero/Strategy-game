#include <iostream>
#include <vector>
#include <assert.h>

#include "Game.h"

int main() {
  std::srand(std::time (nullptr));

  Game game;
  game.create();

  std::cout << "__________________________" << std::endl;
  Log::get_log_object().log();
  std::cout << "ok" << std::endl;
  return 0;
}