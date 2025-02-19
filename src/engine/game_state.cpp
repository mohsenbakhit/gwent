#include "game_state.hpp"
#include "card.hpp"
#include <map>
#include <vector>

GameState::GameState(std::vector<Card> player_deck, std::vector<Card> opp_deck) {
    this->player_deck = player_deck;
    this->opp_deck = opp_deck;
    this->cur_round = 1;
    this->player_score = 0;
    this->opp_score = 0;
    this->player_passed = false;
    this->opp_passed = false;
    this->player_discard = vector<Card> {};
    this->opp_discard = vector<Card> {};

    this->player_board = std::map<enum Range, std::vector<Card> >{};
    this->opp_board = std::map<enum Range, std::vector<Card> >{};
    this->rounds_won = std::map<string, uint8_t>{};
}

uint8_t GameState::is_game_over() {
    if (this->cur_round == 3) {
        return (this->rounds_won["player"] == 2) ? 1 : 2;
    }
    else {
        return -1;
    }
}

void GameState::place_card(bool player, Card* card) {

}


void GameState::trigger_leader() {

}

uint8_t GameState::update_weather(uint8_t weather_effect) {
    if (weather_effect  == 0) {
        this->weather = 0;
        return 0;
    }
    this->weather |= weather_effect;
    return this->weather;
}
