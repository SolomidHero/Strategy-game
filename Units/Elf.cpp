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

void Elf::set_modificator(std::string t, int v) {
  for (int i = 0; i < mods.size(); i++) {
    if (mods[i].type == t) {
      mods[i].value = v;
      return;
    }
  }
  Modificator a;
  a.type = t;
  a.value = v;
  mods.push_back(a);
}

std::vector<Modificator>& Elf::get_modificators() {
  return mods;
}

Health& Elf::get_hp() {
  std::cout << "hp: " << hp.current << "/" << hp.max << " (" << hp.armor << ")" << std::endl;
  return hp;
}

Attack& Elf::get_attack() {
  return attack;
}
