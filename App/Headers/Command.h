#pragma once

#include 

class Command {   
public:
  virtual ~Command() {}
  virtual void execute() = 0;
protected:
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
    string file_name;
    file_name = getPlayerInput("Enter file name:");
    game_ptr->save( file_name);
  }
};
 
class MakeMoveCommand : public Command {
public:
  MakeMoveCommand(Game* p) : Command(p) {}
  void execute() {
    game_ptr->save("TEMP_FILE");
    Point move;
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