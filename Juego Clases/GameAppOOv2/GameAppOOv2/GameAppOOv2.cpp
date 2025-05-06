#include <iostream>
#include "Character.h"
#include "Boss.h"

using namespace std;

int main() {
    Character hero("Elpepe", 100, 10);
    Character enemy("Sauron", 80, 8);
    Boss boss("Pedro Sanchez", 150, 15, 25);

    cout << hero.getStatus() << endl;
    cout << enemy.getStatus() << endl;

    while (hero.isAlive() && enemy.isAlive()) {
        enemy.takeDamage(hero.attack());
        if (enemy.isAlive()) {
            hero.takeDamage(enemy.attack());
        }
        cout << hero.getStatus() << endl;
        cout << enemy.getStatus() << endl;
    }

    if (hero.isAlive()) {
        cout << "\n¡El jugador ha vencido! Ahora se enfrenta al jefe final.\n";

        while (hero.isAlive() && boss.isAlive()) {
            boss.takeDamage(hero.attack());
            if (boss.isAlive()) {
                hero.takeDamage(boss.finalAttack());
            }
            cout << hero.getStatus() << endl;
            cout << boss.getStatus() << endl;
        }

        if (hero.isAlive()) {
            cout << "\n¡Felicidades! Has vencido al jefe final.\n";
        }
        else {
            cout << "\nEl jefe final te ha derrotado. Fin del juego.\n";
        }
    }
    else {
        cout << "\nHas sido derrotado. Fin del juego.\n";
    }

    return 0;
}

