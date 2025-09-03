#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
protected:
    string name;
    int health;
    int damage;

public:
    Player(string name, int health, int damage);

    void attack(Player* opponent);

    void takeDamage(int dmg);

    string getName() const;
    void setName(string n);

    int getHealth() const;
    void setHealth(int h);

    int getDamage() const;
    void setDamage(int d);

    void setName(string n);

    bool isAlive() const;
};

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(string name, int health, int damage, int mana);

    void castSpell(Player* opponent);

    int getMana() const;
    void setMana(int m);
};

class Warrior : public Player {
private:
    string weapon;

public:
    Warrior(string name, int health, int damage, string weapon);

    void swingWeapon(Player* opponent);

    string getWeapon() const;
    void setWeapon(string w);
};

#endif
