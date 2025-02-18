#include <string>
#include <map>
#include <vector>
#include "card.hpp"
class GameState {
    private:
        std::vector<Card>  player_deck;
        std::vector<Card>  opp_deck;
        std::vector<Card> player_hand;
        std::vector<Card>  opp_hand;
        std::vector<Card>  player_dead;
        std::vector<Card>  opp_dead;
        Card player_leader;
        Card opp_leader;
        
        std::map<enum Range, std::vector<Card> > player_board;
        std::map<enum Range, std::vector<Card> > opp_board;
        bool player_passed;
        bool opp_passed;
        uint8_t cur_round;
        uint16_t player_score;
        uint16_t opp_score;
        std::map<string, uint8_t> rounds_won;
    public:
        GameState(std::vector<Card>  player_deck, std::vector<Card>  opp_deck);

};