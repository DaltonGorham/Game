#include "ConsoleUi.h"
#include <string>
#include <iostream>
using namespace std;



std::string Console::getClassName(){
	std::string className;
	std::cout << "Please enter a valid class. Mage/Swordsman/Assassin/Tank" << std::endl;
	std::cin >> className;
	return className;
}

std::string Console::getWeaponName(){
	std::string yourWeapon;
	std::cout << "Choose your weapon. ";
	std:: cin >> yourWeapon;
	return yourWeapon;
}



void Console::showWeaponsFromClass(const std::string& className){
  if (className == "Mage"){
		std::cout << "Earth-Wand/Ice-Wand/Fire-Wand/Lightning-Wand" << std::endl;
	}
	else if (className == "Swordsman"){
		std::cout << "Great-Sword/Katana/Cutlass/Long-Sword" << std::endl;
	}
	else if (className == "Assassin"){
		std::cout << "Dagger/Bow/Pistol/Throwing-Knife" << std::endl;
	}
	else if (className == "Tank"){
		std::cout << "Two-Handed-Sword/Battle-Axe/Heavy-WarHammer/Mace" << std::endl;
	}
}




