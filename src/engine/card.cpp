#include "card.hpp"

Card::Card() {
    
}
Card::Card(string name, uint8_t power, enum Range range, string *ability, bool is_special, enum Faction faction)
{
    this->name_ = name;
    this->power_ = power;
    this->range_ = range;
    this->ability_ = ability;
    this->is_special_ = is_special;
    this->faction_ = faction;
}