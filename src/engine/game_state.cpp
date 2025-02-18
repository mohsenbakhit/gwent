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
    this->rounds_won = std::map<string, uint8_t>{};
    this->player_board = std::map<enum Range, std::vector<Card> >{};
    this->opp_board = std::map<enum Range, std::vector<Card> >{};
}
