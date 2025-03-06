#include <string>
using namespace std;
#pragma once
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
        string name_;
        int16_t power_;
        Range range_;
        string* ability_;
        bool is_special_;
        Faction faction_;
    public:
        Card();
        Card(string name, int16_t power, Range range, string* ability, bool is_special, Faction faction);
        void trigger_ability();
        [[nodiscard]] Range getRange() const;
        [[nodiscard]] int16_t getPower() const;
        [[nodiscard]] string getName() const;
        [[nodiscard]] bool isSpecial() const;
        [[nodiscard]] Faction getFaction() const;
        bool operator==(const Card& other) const;
};