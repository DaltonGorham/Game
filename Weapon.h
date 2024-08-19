#pragma once
#include "Class.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;


struct WeaponAttributes{
  int damage;
  int manaCost;
};

class Weapon{
  protected:
    static vector<string> mage;
    static vector<string> swordsman;
    static vector<string> assassin;
    static vector<string> tank;
    string m_Name;
    int m_Damage;
    int m_ManaCost;
    static map<string, WeaponAttributes> weaponAttributes;
  public:
    Weapon(string name, int damage, int manaCost) : m_Name(name), m_Damage(damage), m_ManaCost(manaCost) {}
    void setDamage(int d){m_Damage = d;}
    int getDamage(){return m_Damage;}
    int getManaCost(){return m_ManaCost;}
    static Weapon* createWeapon(string& weapon);
    static Weapon* selectWeapon(Console& ui);
    static Weapon* getComputerWeapon();
    static string generateComputerWeapon(ClassType* className);
    string getName(){return m_Name;}
    friend ostream& operator<<(ostream& strm, Weapon& weapon);
};