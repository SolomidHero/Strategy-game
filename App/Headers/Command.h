#pragma once

#include "Game.h"

class Command {   
public:
  virtual ~Command() {}
  virtual void execute() = 0;
protected:
  friend class Game;
  Command(Game* p) : game_ptr(p) {}
  Game* game_ptr;       
};

class CreateGameCommand : public Command {
public:
  CreateGameCommand(Game* p) : Command(p) {}
  void execute() {
    game_ptr->create();
  }
};
 
class SaveGameCommand : public Command {
public:
  SaveGameCommand(Game* p) : Command(p) {}
  void execute() {
    game_ptr->save();
  }
};
 
class MakeMoveCommand : public Command {
public:
  MakeMoveCommand(Game* p) : Command(p) {}
  void execute() {
    game_ptr->save();
    Point move;
    std::cout << "Coords: ";
    std::cin >> move.x >> move.y;
    game_ptr->make_move(move);
  }
};
 
class UndoCommand: public Command {
public:
  UndoCommand(Game* p) : Command(p) {}
  void execute() {
    game_ptr->undo();
  }
};