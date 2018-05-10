#pragma once

template<class UnitClass>
void Healer::heal_unit(std::unique_ptr<UnitClass>& unit) {
  Health& hp = unit->get_hp();
  Heal& heal = get_heal();
  if (heal.portions != 0) {
    int delta = (hp.current + heal.pt > hp.max)? hp.max - hp.current : heal.pt;
    heal.portions--;
    hp.current += delta;

    Log::get_log_object().add("heal", get_id(), unit->get_id(), delta);
  }
}