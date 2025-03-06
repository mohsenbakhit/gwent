#ifndef CARD
#define CARD
#include <string>
enum Range {
    MELEE,
    RANGED,
    SIEGE
};

enum Faction {
    NILFGAARD,
    NORTHERN,
    SKELLIGE,
    MONSTERS,
    SCOTIATEL,
    SYNDICATE
};

class Card {
    private:
        std::string name_;
        int16_t power_;
        Range range_;
        std::string* ability_;
        bool is_special_;
        Faction faction_;
    public:
        [[maybe_unused]] Card();
        Card(std::string name, int16_t power, Range range, std::string* ability, bool is_special, Faction faction);
        void trigger_ability();
        [[nodiscard]] Range getRange() const;
        [[nodiscard]] int16_t getPower() const;
        [[nodiscard]] std::string getName() const;
        [[nodiscard]] bool isSpecial() const;
        [[nodiscard]] Faction getFaction() const;
        bool operator==(const Card& other) const;
};
#endif CARD