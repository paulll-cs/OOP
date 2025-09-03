#include "player.h"
#include <iostream>
using namespace std;

class Warrior : public Player {
private:
    string weapon;

public:
    Warrior(string name, int health, int damage, string weapon)
        : Player(name, health, damage), weapon(weapon) {}

    void swingWeapon(Player* opponent) {
        cout << name << " swings their " << weapon
             << " at " << opponent->getName()
             << " for " << damage << " damage!" << endl;
        opponent->takeDamage(damage);
    }

    string getWeapon() const { return weapon; }
    void setWeapon(string w) { weapon = w; }
};


