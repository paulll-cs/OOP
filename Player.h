#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

// Base class
class Player {
protected:
    string name;
    int health;
    int damage;

public:
    // Constructor
    Player(string name, int health, int damage);

    // Attack
    void attack(Player* opponent);

    // Take damage
    void takeDamage(int dmg);

    // Getters & Setters
    string getName() const;
    void setName(string n);

    int getHealth() const;
    void setHealth(int h);

    int getDamage() const;
    void setDamage(int d);

    void setName(string n);

    bool isAlive() const;
};

// Wizard subclass
class Wizard : public Player {
private:
    int mana;

public:
    Wizard(string name, int health, int damage, int mana);

    void castSpell(Player* opponent);

    // Getter & Setter
    int getMana() const;
    void setMana(int m);
};

// Warrior subclass
class Warrior : public Player {
private:
    string weapon;

public:
    Warrior(string name, int health, int damage, string weapon);

    void swingWeapon(Player* opponent);

    // Getter & Setter
    string getWeapon() const;
    void setWeapon(string w);
};

#endif
