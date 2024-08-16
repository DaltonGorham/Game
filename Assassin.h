#pragma once
#include "Class.h"
#include "Weopon.h"


class Assassin : public ClassType {
protected:
	Weopon fast[4] = {"Dagger", "Bow'n Arrow", "Pistol","Throwing-Knife"}; 
public:
	Assassin() : ClassType("Assassin", 50, 90, 400) {}
	int getMana()override { return m_Mana; }
	int getStrength()override { return m_Strength; }
	int getHealth()override { return m_Health; }
	string getName()override { return m_Name; }
};