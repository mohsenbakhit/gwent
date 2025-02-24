#include "game_state.hpp"
#include "card.hpp"
#include <map>
#include <vector>

GameState::GameState() {
    this->player_deck = std::vector<Card> {};
    this->opp_deck = std::vector<Card> {};
    this->cur_round = 1;
    this->player_score = 0;
    this->opp_score = 0;
    this->player_passed = false;
    this->opp_passed = false;
    this->player_discard = std::vector<Card> {};
    this->opp_discard = std::vector<Card> {};

    this->player_board = std::map<Range, std::vector<Card> >{};
    this->opp_board = std::map<Range, std::vector<Card> >{};
    this->rounds_won = std::map<std::string, uint16_t>{};
}

GameState::GameState(std::vector<Card> player_deck, std::vector<Card> opp_deck) {
    this->player_deck = player_deck;
    this->opp_deck = opp_deck;
    this->cur_round = 1;
    this->player_score = 0;
    this->opp_score = 0;
    this->player_passed = false;
    this->opp_passed = false;
    this->player_discard = std::vector<Card> {};
    this->opp_discard = std::vector<Card> {};

    this->player_board = std::map<Range, std::vector<Card> >{};
    this->opp_board = std::map<Range, std::vector<Card> >{};
    this->rounds_won = std::map<std::string, uint16_t>{};
}

uint16_t GameState::is_game_over() {
    if (this->cur_round == 3) {
        return (this->rounds_won["player"] == 2) ? 1 : 2;
    }
    else {
        return -1;
    }
}

void GameState::place_card(bool player, const Card& card) {
    if (player) {
        this->player_board[card.getRange()].push_back(card);
        auto it = std::remove(this->player_hand.begin(), this->player_hand.end(), card);
        this->player_hand.erase(it, this->player_hand.end());
    }
    else {

    }
}

void GameState::trigger_leader() {

}

uint16_t GameState::update_weather(uint16_t weather_effect) {
    if (weather_effect  == 0) {
        this->weather = 0;
        return 0;
    }
    this->weather |= weather_effect;
    return this->weather;
}