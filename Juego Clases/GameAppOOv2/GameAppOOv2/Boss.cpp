#include "boss.h"

Boss::Boss(string name, int hp, int damage, int danoUlti)
    : Character(name, hp, damage), danoUlti(danoUlti) {
}

int Boss::finalAttack() {
    return danoUlti;
}
