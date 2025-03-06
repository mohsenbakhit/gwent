#include "player.hpp"

Player::Player() {

}

Player::Player(std::string name, int16_t score, std::vector<Card> player_deck) {
    this->name_ = std::move(name);
    this->score_ = score;
    this->player_deck = std::move(player_deck);
}

void Player::won_round() {
    this->score_++;
}

int16_t Player::getScore() const {
    return this->score_;
}

std::string Player::getName() const {
    return this->name_;
}

bool Player::operator==(const Player &other) const {
    return this->name_ == other.name_;
}