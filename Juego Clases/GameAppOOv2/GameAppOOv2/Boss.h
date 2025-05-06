#include "character.h"
#include <iostream>
using namespace std;

class Boss : public Character {
private:
    int danoUlti;

public:
    Boss(string name, int hp, int damage, int danoUlti);
    int finalAttack();
};
