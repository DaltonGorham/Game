#pragma once
#include "Class.h"
#include "Weapon.h"
#include <vector>
using namespace std;


class Assassin : public ClassType {
protected:

public:
	Assassin() : ClassType("Assassin", 50, 90, 400) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};