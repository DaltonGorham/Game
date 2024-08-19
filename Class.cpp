#include "Class.h"
#include "Mage.h"
#include "Swordsman.h"
#include "Tank.h"
#include "Assassin.h"
#include "ConsoleUi.h"





 ClassType* ClassType::createClass(string& className) {
	if (className == "Mage") {
		return new Mage();
	}
	else if (className == "Swordsman") {
		return new Swordsman();
	}
	else if (className == "Tank") {
		return new Tank();
	}
	else if (className == "Assassin"){
		return new Assassin();
	}
	else {
		return nullptr;
	}
}


ClassType* ClassType::selectClass(Console& ui) {
    ClassType* name = nullptr;
    do {
        std::string className = ui.getClassName();
        name = ClassType::createClass(className);
        if (name == nullptr) {
            std::cout << "Invalid class name. Try again." << std::endl;
        }
    } while (name == nullptr);
    return name;
}


ClassType* ClassType::generateComputerClass(){
	int randomClass = rand() % 4;

	switch(randomClass){
		case 1: return new Swordsman();
		break;
		case 2: return new Mage();
		break;
		case 3: return new Tank();
		break;
		case 4: return new Assassin();
		break;
	}
	return nullptr;
}


ostream& operator<<(ostream& strm, ClassType championClass){
	return strm << "Class: " << championClass.getName() << "\n"
	<< "Mana: " << championClass.getMana() << "\n"
	<< "Strength: " << championClass.getStrength() << "\n"
	<< "Health: " << championClass.getHealth() << "\n";
}




