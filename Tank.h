#pragma once
#include "Class.h"
#include "Weopon.h"



class Tank : public ClassType {
protected:
	Weopon heavy[4] = {"Two-Handed-Sword", "Battle-Axe", "Heavy-WarHammer", "Mace"};
public:
	Tank() : ClassType("Mage", 30, 20, 800) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};