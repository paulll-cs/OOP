#include <iostream>
#include <string>
using namespace std;

class Player {
protected:
    string name;
    int health;
    int damage;

public:
    Player(string name, int health, int damage)
        : name(name), health(health), damage(damage) {}

    void attack(Player* opponent) {
        cout << name << " attacks " << opponent->getName()
             << " for " << damage << " damage!" << endl;
        opponent->takeDamage(damage);
    }

    void takeDamage(int dmg) {
        health -= dmg;
        if (health < 0) health = 0;
        cout << name << " takes " << dmg
             << " damage. Remaining health: " << health << endl;
    }

    string getName() const { return name; }
    void setName(string n) { name = n; }

    int getHealth() const { return health; }
    void setHealth(int h) { health = h; }

    int getDamage() const { return damage; }
    void setDamage(int d) { damage = d; }

    bool isAlive() const { return health > 0; }
};



int main() {
    Wizard wizard("Gandalf", 100, 10, 25);
    Warrior warrior("Conan", 120, 15, "Sword");

    wizard.castSpell(&warrior);
    warrior.swingWeapon(&wizard);

    wizard.attack(&warrior);
    warrior.attack(&wizard);

    return 0;
}
