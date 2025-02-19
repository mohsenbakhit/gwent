#include <string>
using namespace std;
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
        uint8_t power_;
        enum Range range_;
        string* ability_;
        bool is_special_;
        enum Faction faction_;
    public:
        Card();
        Card(string name, uint8_t power, enum Range range, string* ability, bool is_special, enum Faction faction);
        void trigger_ability();
};