#include <string>
#include <map>
#include <vector>
#include "card.hpp"

const uint8_t BITING_FROST = 1; // 0b001
const uint8_t IMPENETRABLE_FOG = 2; // 0b010
const uint8_t TORRENTIAL_RAIN = 4; //0b100
const uint8_t SKELLIGE_STORM = 6; //0b110

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
        
        std::map<enum Range, std::vector<Card> > player_board;
        std::map<enum Range, std::vector<Card> > opp_board;
        bool player_passed;
        bool opp_passed;
        uint8_t cur_round;
        uint8_t weather;
        uint16_t player_score;
        uint16_t opp_score;
        std::map<string, uint8_t> rounds_won;
    public:
        GameState(std::vector<Card>  player_deck, std::vector<Card>  opp_deck);
        uint8_t is_game_over();
        void place_card(bool player, Card* card);
        void trigger_leader();
        uint8_t update_weather(uint8_t weather_effect);
        
};