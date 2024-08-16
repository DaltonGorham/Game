#include <iostream>
#include <string>
#include "Class.h"
#include "Mage.h"
#include "Swordsman.h"
#include "Tank.h"
#include "Assassin.h"
using namespace std;

int main() {

	string className;
	ClassType* name = nullptr;
	cout << "Please enter a valid class. Mage/Swordsman/Assassin/Tank" << endl;
	do {
		if (name != nullptr) {
			delete name; 
		}

		
		cin >> className;

		name = ClassType::createClass(className); 

		if (name == nullptr) {
			cout << "Invalid class name. Try again." << endl;
		}
	} while (name == nullptr);

	 
		cout << "Your Champion: " << endl;
		cout << "Class: " << name->getName() << endl;
		cout << "Mana: " << name->getMana() << endl;
		cout << "Strength: " << name->getStrength() << endl;
		cout << "Health: " << name->getHealth() << endl;
	




	delete name;

	









	return 0;
}










