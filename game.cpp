#include <iostream>
#include <string>
#include "Class.h"
#include "Mage.h"
#include "Swordsman.h"
#include "Tank.h"
#include "Assassin.h"
#include "Weapon.h"
#include "ConsoleUi.h"
using namespace std;

int main() {

		Console ui;

		ClassType* selectedClass = ClassType::selectClass(ui);
		Console::clearScreen();

		ui.showWeaponsFromClass(selectedClass->getName());
		Weapon* selectedWeapon = Weapon::selectWeapon(ui);
		Console::clearScreen();






		cout << "Your Champion: " << endl;
		cout << "Class: " << selectedClass->getName() << endl;
		cout << "Mana: " << selectedClass->getMana() << endl;
		cout << "Strength: " << selectedClass->getStrength() << endl;
		cout << "Health: " << selectedClass->getHealth() << endl << endl;

		cout << "Champion's Weapon: " << selectedWeapon->getName() << endl;
		cout << "Damage: " << selectedWeapon->getDamage() << endl;
		cout << "Mana-Cost: " << selectedWeapon->getManaCost() << endl;

		delete selectedClass;
		delete selectedWeapon;
	
	









	return 0;
}













