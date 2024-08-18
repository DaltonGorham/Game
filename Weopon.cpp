#include "Weapon.h"
#include "ConsoleUi.h"



map<string, WeaponAttributes> Weapon::weaponAttributes = {
    {"Dagger", {20, 0}},
    {"Bow", {15, 5}},
    {"Pistol", {25, 0}},
    {"Throwing-Knife", {10, 0}},
    {"Great-Sword", {30, 10}},
    {"Katana", {25, 5}},
    {"Cutlass", {20, 5}},
    {"Long-Sword", {28, 8}},
    {"Two-Handed-Sword", {35, 15}},
    {"Battle-Axe", {40, 20}},
    {"Heavy-WarHammer", {50, 25}},
    {"Mace", {32, 10}},
    {"Earth-Wand", {10, 20}},
    {"Ice-Wand", {12, 25}},
    {"Fire-Wand", {15, 30}},
    {"Lightning-Wand", {18, 35}}
};




Weapon* Weapon:: createWeapon(string& weapon){

  auto it = weaponAttributes.find(weapon);

  if (it != weaponAttributes.end()){
    int damage = it->second.damage;
    int manaCost = it->second.manaCost;
    return new Weapon(weapon, damage, manaCost);
  }
  else{
    return nullptr;
  }
}



Weapon* Weapon::selectWeapon(Console& ui) {
    Weapon* weapon = nullptr;
    do {
        std::string weaponName = ui.getWeaponName();
        weapon = Weapon::createWeapon(weaponName);
        if (weapon == nullptr) {
            std::cout << "Invalid weapon. Try again." << std::endl;
        }
    } while (weapon == nullptr);
    return weapon;
}
