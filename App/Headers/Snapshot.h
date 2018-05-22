#pragma once

#include <iostream>

#include "director.h"
#include "Player.h"

struct State {
  director app;
  std::vector<std::shared_ptr<Player>> players;
};

class Snapshot {
public:
  Snapshot(State& state);
  Snapshot() = default;

  void add_save(State& state);
  std::vector<State> saved_games;
};
 