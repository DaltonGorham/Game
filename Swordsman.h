#pragma once
#include "Class.h"
#include "Weopon.h"

class Swordsman : public ClassType{
protected:
	Weopon Swords[4] = {"Great-Sword", "Katana", "Cutlass", "Long-Sword"};
public:
	Swordsman() : ClassType("Swordsman", 50, 90, 650) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};