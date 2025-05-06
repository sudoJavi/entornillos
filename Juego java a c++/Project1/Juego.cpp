#include <iostream>
#include <random>

using namespace std;

int generarDa�o(int& maxDa�o) {
    random_device rd;
    mt19937 gen(rd()); //"mt199937" obligatorio para generar un n�mero random
    uniform_int_distribution<> dis(1, maxDa�o); //Dis crea uan distribuci�n uniforma entre 1 y el m�xDa�o
    return dis(gen);
}

int turnoHero(int& heroHP, int& enemyHP, int heroAttack) {
    int da�oHero = generarDa�o(heroAttack);
    enemyHP -= da�oHero;
    cout << "\nNuestro colegon se cree Jackie Chan y causa " << da�oHero << " de da�o." << endl;

    if (enemyHP <= 0) {
        cout << "El malechor huye, vaya pringao" << endl;
    }
    else {
        cout << "Al malechor aun le quedan " << enemyHP << "punticos de vida" << endl;
    }

    return enemyHP;
}

int turnoEnemi(int& heroHP, int& enemyHP, int enemyAttack) {
    int monsterAttack = generarDa�o(enemyAttack);
    heroHP -= monsterAttack;
    cout << "\nEl malechor mos mete una que nos hace " << monsterAttack << " de da�o." << endl;

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
