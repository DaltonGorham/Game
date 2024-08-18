#ifndef ConsoleUi_H
#define ConsoleUi_H
using namespace std;
#include <iostream>

class Console{


  public:
      static void clearScreen() {cout << "\033[2J\033[H";}
      void showWeaponsFromClass(const string& className);
      string getClassName();
      string getWeaponName();
};


#endif