#include "Elf.h"
#include <iostream>
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
      if((rand() % 2)== 0){
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage *= 2;
      }
      return damage;
}
}
