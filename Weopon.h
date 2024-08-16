#pragma once
#include <iostream>
using namespace std;

class Weopon{
  protected:
    string m_Name;
    int m_Damage;

    
  public:
    Weopon(string name) : m_Name(name){}
    void setDamage(int d){m_Damage = d;}
    int getDamage(){return m_Damage;}
};