#include <iostream>
#include <string>
#include <ctime>
#include "mainHeaders.h"
using namespace std;

int main() {

		Console ui;
		srand(time(0));

		ClassType* selectedClass = ClassType::selectClass(ui);
		Console::clearScreen();

		ui.showWeaponsFromClass(selectedClass->getName());
		Weapon* selectedWeapon = Weapon::selectWeapon(ui);
		Console::clearScreen();






		cout << "Your Champion: " << endl;
		cout << *selectedClass << *selectedWeapon;

		cout << endl;
		cout << "***VS****" << endl << endl;
		ClassType* computerClass = ClassType::generateComputerClass();
		string cpWeapon = Weapon::generateComputerWeapon(computerClass);
		Weapon* computerWeapon = Weapon::createWeapon(cpWeapon);


		cout << "Computer Champion: " << endl;
		cout << *computerClass << *computerWeapon;



		delete selectedClass;
		delete selectedWeapon;
		delete computerWeapon;
		delete computerClass;
	
	









	return 0;
}













