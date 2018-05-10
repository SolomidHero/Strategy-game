#pragma once

#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <iomanip>

struct Action {
  std::chrono::system_clock::time_point time;
  int from = 0;
  int to = 0;
  std::string type = "";
  int value = 0;
};

class Log {
public:
  Log(Log const&) {};
  Log& operator=(Log const&);

  void add(std::string type, int id_from, int id_to, int value);
  static Log& get_log_object();
  void log();

private:
  Log();

  std::vector<Action> acts;
  static int log_size;
};