#include <string>
#include <map>
#include <vector>
#include "card.hpp"
#pragma once

const uint16_t BITING_FROST = 1; // 0b001
const uint16_t IMPENETRABLE_FOG = 2; // 0b010
const uint16_t TORRENTIAL_RAIN = 4; //0b100
const uint16_t SKELLIGE_STORM = 6; //0b110

class GameState {
    private:
        std::vector<Card>  player_deck;
        std::vector<Card>  opp_deck;
        std::vector<Card> player_hand;
        std::vector<Card>  opp_hand;
        std::vector<Card>  player_discard;
        std::vector<Card>  opp_discard;
        Card player_leader;
        Card opp_leader;
        
        std::map<Range, std::vector<Card> > player_board;
        std::map<Range, std::vector<Card> > opp_board;
        bool player_passed;
        bool opp_passed;
        uint16_t cur_round;
        uint16_t weather;
        uint16_t player_score;
        uint16_t opp_score;
        std::map<string, uint16_t> rounds_won;
    public:
        GameState();
        GameState(std::vector<Card>  player_deck, std::vector<Card>  opp_deck);
        uint16_t is_game_over();
        void place_card(bool player, const Card& card);
        void trigger_leader();
        uint16_t update_weather(uint16_t weather_effect);
        
};