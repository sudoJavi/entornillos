#pragma once

#include <iostream>

#include <string>

using namespace std;

class Character {

protected:

    string name;

    int hp;

    int damage;

public:

    Character(string name, int hp, int damage);

    virtual int attack();  // Método virtual para polimorfismo

    void takeDamage(int dmg);

    string getStatus();

    bool isAlive();

};

