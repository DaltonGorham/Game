#include <iostream>
#include <string>
#include "Class.h"
#include "Mage.h"
#include "Swordsman.h"
#include "Tank.h"
#include "Assassin.h"
#include "Weopon.h"
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
	




	
	cout << endl << endl << endl;


	if (className == "Mage"){
		cout << "Earth-Wand/Ice-Wand/Fire-Wand/Lightning-Wand" << endl;
	}
	else if (className == "Swordsman"){
		cout << "Great-Sword/Katana/Cutlass/Long-Sword" << endl;
	}
	else if (className == "Assassin"){
		cout << "Dagger/Bow'n Arrow/Pistol/Throwing-Knife" << endl;
	}
	else if (className == "Tank"){
		cout << "Two-Handed-Sword/Battle-Axe/Heavy-WarHammer/Mace" << endl;
	}

	string w;
	cout << "Choose your weopon" << " ";
	cin >> w;

	delete name;
	









	return 0;
}










