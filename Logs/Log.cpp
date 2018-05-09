#include <iostream>
#include "Log.h"
#include "CharactersConfig.h"

Log::Log() : log_size(LogSize) {}

void Log::add(std::string type, int from, int to, int value) {
  std::string act = "";
  act += from;
  act += " ";
  act += type;
  act += " "; 
  act += to;
  act += " for ";
  act += value;
  if (log.size() == log_size) {
    log.erase(log.begin());
    log.push_back(act);
  }
}

void Log::get_log() {
  for (auto it : log) {
    std::cout << it << std::endl;
  }
}