#include "Healer.h"
#include <string>
using namespace std;

std::string Healer::quote() const {
  return "Power of restoration!";
}

void Healer::set_heal(int pts, int ports) {
  heal.pt = pts;
  heal.portions = ports;
}

Heal& Healer::get_heal() {
  return heal;
}

void Healer::heal_unit () {
  Health hp = get_hp();
  if (heal.portions != 0) {
    int delta = (hp.current + heal.pt > hp.max)? hp.max - hp.current : heal.pt;
    std::cout << "I was healed by " << delta << " hp!" << std::endl;
    heal.portions--;
    set_hp(hp.current + delta, hp.max, hp.regen);
  } else {
    std::cout << "I can't heal!" << std::endl;
  }
}
