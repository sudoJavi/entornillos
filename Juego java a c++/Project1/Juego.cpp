#include <iostream>
#include <random>

using namespace std;

int generarDaño(int& maxDaño) {
    random_device rd;
    mt19937 gen(rd()); //"mt199937" obligatorio para generar un número random
    uniform_int_distribution<> dis(1, maxDaño); //Dis crea uan distribución uniforma entre 1 y el máxDaño
    return dis(gen);
}

int turnoHero(int& heroHP, int& enemyHP, int heroAttack) {
    int dañoHero = generarDaño(heroAttack);
    enemyHP -= dañoHero;
    cout << "\nNuestro colegon se cree Jackie Chan y causa " << dañoHero << " de daño." << endl;

    if (enemyHP <= 0) {
        cout << "El malechor huye, vaya pringao" << endl;
    }
    else {
        cout << "Al malechor aun le quedan " << enemyHP << "punticos de vida" << endl;
    }

    return enemyHP;
}

int turnoEnemi(int& heroHP, int& enemyHP, int enemyAttack) {
    int monsterAttack = generarDaño(enemyAttack);
    heroHP -= monsterAttack;
    cout << "\nEl malechor mos mete una que nos hace " << monsterAttack << " de daño." << endl;

    if (heroHP <= 0) {
        cout << "Nos han ganau, nos quedamos sin movil" << endl;
    }
    else {
        cout << "A mi colegon le quedan " << heroHP << " puntos de vida" << endl;
    }

    return heroHP;
}

void batalla() {
    int heroHP = 100;
    int heroAttack = 15;

    int enemyHP = 80;
    int enemyAttack = 12;

    cout << "Nuestro colegon va por la rambla y se encuentra un malechor, esto va a ser una batalla epica" << endl;

    while (heroHP > 0 && enemyHP > 0) {
       
        enemyHP = turnoHero(heroHP, enemyHP, heroAttack);
        if (enemyHP <= 0) {
            break;
        }

        heroHP = turnoEnemi(heroHP, enemyHP, enemyAttack);
        if (heroHP <= 0) {
            break;
        }
    }

    cout << "\nSa' acabau \n\nINSERT COIN TO CONTINUE" << endl;
}

int main() {
    batalla();
    return 0;
}
