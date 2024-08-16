#pragma once
#include "Class.h"
#include "Weopon.h"



class Mage : public ClassType {
protected:
	Weopon wands[4] = {"Earth-Wand", "Ice-Wand", "Fire-Wand", "Lightning-Wand"};
public:
	Mage() : ClassType("Mage", 150, 40, 400) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};