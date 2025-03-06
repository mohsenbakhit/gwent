#ifndef PLAYER
#define PLAYER
#include <string>
#include <vector>
#include "card.hpp"
class Player {
    private:
        std::string name_;
        std::vector<Card> player_deck;
        int16_t score_;
    public:
        [[maybe_unused]]Player();
        Player(std::string name, int16_t score, std::vector<Card> player_deck);
        void won_round();
        [[nodiscard]] int16_t getScore() const;
        [[nodiscard]] std::string getName() const;
        bool operator==(const Player& other) const;
};
#endif