#include <iostream>
#include "character.h"
using namespace std;

int main() {
	Character enemy("Sauron", 100, 20);
	Character hero("Elpepe", 1000, 1);

	cout << enemy.getStatus();
}
	
