#include <iostream>
#include "Log.h"
#include "CharactersConfig.h"

Log::Log() {}

int Log::log_size = LogSize;

void Log::add(std::string type, int from, int to, int value) {

  Action act;
  act.type = type;
  act.from = from;
  act.to = to;
  act.value = value;
  act.time = std::chrono::system_clock::now(); 
  if (acts.size() == log_size) {
    acts.erase(acts.begin());
  }
  acts.push_back(act);
}

Log& Log::get_log_object() {
  static Log instance;
  return instance;
}

void Log::log() {
  for (auto it : acts) {
    std::time_t t = std::chrono::system_clock::to_time_t(it.time);
    std::cout << "[" << std::put_time(std::localtime(&t), "%F %T") <<
      "]: " << it.from << " " << it.type << " " << it.to << " for " << it.value << std::endl;
  }
}