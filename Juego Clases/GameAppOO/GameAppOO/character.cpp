#include "character.h"
#include <string>


Character::Character()
{
	name = "";
	hp = 0;
	damage = 0;

}


Character::Character(string name, int hp, int damage)
{
	this->name = name;
	this->hp = hp;
	this->damage = damage;
}

string Character::getName()
{
	return name;
}

int Character::getHp()
{
	return hp;
}

int Character::getDamage()
{
	return damage;
}

void Character::setName(string name)
{
	this->name = name;
}

void Character::setHp(string name, int hp)
{
	this->hp = hp;
}

void Character::setDamage(string name, int damage)
{
	this->damage = damage;
}

string Character::getStatus()
{
	return ("Character Status:\n    Name: " + name + "\n    HP: " + hp + to_string(hp) + "\n Damage: " + to_string(damage));
}
