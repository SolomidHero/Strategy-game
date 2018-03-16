#include "Healer.h"
#include <iostream>
#include <string>
using namespace std;

std::string Healer::quote() const {
  return "Power of restoration!";
}

void Healer::set_heal(int ports, int pts) {
  heal.portions = ports;
  heal.pt = pts;
}

Heal Healer::get_heal() const {
  return heal;
}

void Healer::heal_unit () {
  Health hp = get_hp();
  if (heal.portions != 0) {
    int delta = (hp.current + heal.pt > hp.max)? hp.max - hp.current : heal.pt;
    std::cout << "I was healed by " << delta << " hp!" << std::endl;
    heal.portions--;
    set_hp(hp.current + delta, hp.max, hp.regen);
  }
}
