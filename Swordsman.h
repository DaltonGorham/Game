#pragma once
#include "Class.h"

class Swordsman : public ClassType{
public:
	Swordsman() : ClassType("Swordsman", 50, 90, 650) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};