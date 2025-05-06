#include "character.h"

Character::Character(string name, int hp, int damage) : name(name), hp(hp), damage(damage) {}

int Character::attack() {
    return damage;
}

void Character::takeDamage(int dmg) {
    hp -= dmg;
    if (hp < 0) hp = 0;
}

string Character::getStatus() {
    return "Status:\n  Name: " + name + "\n  HP: " + to_string(hp) + "\n  Damage: " + to_string(damage);
}

bool Character::isAlive() {
    return hp > 0;
}