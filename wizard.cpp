#include "player.h"
#include <iostream>
using namespace std;

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(string name, int health, int damage, int mana)
        : Player(name, health, damage), mana(mana) {}

    void castSpell(Player* opponent) {
        cout << name << " casts a spell on " << opponent->getName()
             << " for " << mana << " damage!" << endl;
        opponent->takeDamage(mana);
    }

    int getMana() const { return mana; }
    void setMana(int m) { mana = m; }
};