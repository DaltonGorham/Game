#include "Class.h"
#include "Mage.h"
#include "Swordsman.h"
#include "Tank.h"
#include "Assassin.h"





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