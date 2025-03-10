#include "card.hpp"

Card::Card() {
    
}
Card::Card(std::string name, int16_t power, enum Range range, std::string *ability, bool is_special, enum Faction faction)
{
    this->name_ = std::move(name);
    this->power_ = power;
    this->range_ = range;
    this->ability_ = ability;
    this->is_special_ = is_special;
    this->faction_ = faction;
}

// TODO: Implement this function
void Card::trigger_ability() {
    
}

Range Card::getRange() const {
    return this->range_;
}

int16_t Card::getPower() const {
    return this->power_;
}

std::string Card::getName() const {
    return this->name_;
}

bool Card::isSpecial() const {
    return this->is_special_;
}

Faction Card::getFaction() const {
    return this->faction_;
}

bool Card::operator==(const Card &other) const {
    return this->name_ == other.name_;
}