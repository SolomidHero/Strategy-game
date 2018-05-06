#pragma once

template<class UnitClass>
void Mage::attack_unit_by_magic(std::unique_ptr<UnitClass>& target) {
  Magic& magic = get_magic();
  Health& hp = target->get_hp();
  int attack_magic = rand() % (magic.dmg_high - magic.dmg_low + 1) + magic.dmg_low;
  hp.current = std::max(0, hp.current - attack_magic);
  if (hp.current <= 0) {
    hp.current = 0;
  }
}