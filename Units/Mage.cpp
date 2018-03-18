#include <iostream>
#include "Mage.h"

std::string Mage::quote() const {
  return "Magic is an instrument.";
}

void Mage::set_magic(int l, int h, std::string t) {
  magic.dmg_low = l;
  magic.dmg_high = h;
  magic.type = t;
}

Magic& Mage::get_magic() {
  return magic;
}
