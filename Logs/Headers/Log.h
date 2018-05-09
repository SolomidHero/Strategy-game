#pragma once

#include <vector>
#include <string>

class Log {
public:
  Log();
  
  void add(std::string type, int id_from, int id_to, int value);
  void get_log();
private:
  int log_size;
  std::vector<std::string> log;
};