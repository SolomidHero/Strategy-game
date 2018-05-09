#include "HealerCreator.h"
#include "Healer.h"
#include "CharactersConfig.h"

std::unique_ptr<Healer> HealerCreator::create_unit() const {
  std::unique_ptr<Healer> ptr (new Healer());
  ptr->set_hp(HealerHealth, HealerHealth, HealerRegen);
  ptr->set_attack(HealerAttackLow, HealerAttackHigh, MeleeAttack);
  ptr->set_heal(HealerHealValue, HealerHealCharges);
  ptr->set_id(IdNum);
  return std::move(ptr);
}

std::unique_ptr<Healer> HealerCreator::render_unit() {
  std::unique_ptr<Healer> ptr = UnitCreator<Healer>::render_unit();
  Heal heal = std::move(ptr)->get_heal();
  std::cout << heal.pt << " and ";
  if (heal.portions < 0) 
    std::cout << "infinity charges" << std::endl;
  else
    std::cout << heal.portions << " charges" << std::endl;
  return ptr;
}
