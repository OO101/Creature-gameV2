#include "Elf.h"
#include <iostream>
#include <string>
using namespace std;
namespace cs_creature{


    string Elf::getSpecies() const
    {
        return "elf";
    }

int Elf::getDamage() const
{
    int damage = Creature::getDamage();
     cout <<"The " << getSpecies() << " attacks for " << damage << " points!" << endl;
        if (rand() % 100 * 0.01 < MAGICAL_ATTACK_PROBABILITY) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= MAGICAL_ATTACK_MULTIPLIER;
        }
      return damage;
}
};
