#pragma once
#include <iostream>
using namespace std;

class Character
{
	//Atributos
private:
	string name;
	int hp;
	int damage;

	//Prototipos 
public:
	//Constructores
	Character();
	Character(string name, int hp, int damage);

	//getters
	string getName();
	int getHp();
	int getDamage();

	//setters
	void setName(string name);
	void setHp(string name, int hp);
	void setDamage(string name, int damage);

	//metodos rapidos
	string getStatus();


};
