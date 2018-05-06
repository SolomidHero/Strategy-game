#pragma once

template<class UnitClass>
void Elf::attack_unit(std::unique_ptr<UnitClass>& target) {
  Health& target_hp = target->get_hp();
  Attack& unit_attack = get_attack();
  int attack_target_hp = rand() % (unit_attack.high - unit_attack.low + 1) + unit_attack.low;
  target_hp.current = std::max(0, target_hp.current - attack_target_hp);
  if (target_hp.current <= 0) {
    target_hp.current = 0;
  }
}