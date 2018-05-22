#include "Snapshot.h"

Snapshot::Snapshot(State& state) {
  saved_games.push_back(std::move(state));
}

void Snapshot::add_save(State& state) {
  saved_games.push_back(std::move(state));
}
