#pragma once
#include "ConsoleUi.h"
#include <iostream>
#include <string>
using namespace std;



class ClassType {
protected:
	string m_Name;
	int m_Mana;
	int m_Strength;
	int m_Health;
public:
	ClassType(string className, int mana, int strength, int health) : m_Name(className), 
	m_Mana(mana), m_Strength(strength), m_Health(health){}
	virtual string getName() { return m_Name; }
	virtual int getMana() { return m_Mana; }
	virtual int getStrength() { return m_Strength; }
	virtual int getHealth() { return m_Health; }
	static ClassType* createClass(string& className);
	static ClassType* selectClass(Console& ui);
	static ClassType* generateComputerClass();
	friend ostream& operator<<(ostream& strm, ClassType className);
};
