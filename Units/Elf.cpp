#include "Elf.h"
#include <iostream>
#include <string>
using namespace std;

std::string Elf::quote() const {
  return "I am newborn elf!";
}

void Elf::set_hp(int h, int mh, int hr) {
  hp.current = h;
  hp.max = mh;
  hp.regen = hr;
  hp.armor = 0;
}

void Elf::set_attack(int l, int h, string t) {
  attack.low = l;
  attack.high = h;
  attack.type = t;
}

Health& Elf::get_hp() {
  return hp;
}

Attack& Elf::get_attack() {
  return attack;
}
