#include "Balrog.h"
#include <iostream>
namespace cs_creature{



std::string Balrog::getSpecies() const
{
    return "balrog";
}

int Balrog::getDamage() const
{
    int damage1 = Demon::getDamage(), damagehold = 0;
    cout << "The " << getSpecies() << " attacks for " << damage1 << " points!" << endl;
    if(rand() % 4 == 0)
    {
        cout << "Demonic attack inflicts 50 additional damage points!" << endl;
        damagehold = 50;
    }
    int damage2 = (rand() % Demon::getStrength()) + 1;
    cout <<  "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    int damage = damage1 + damagehold + damage2;
    return damage;
}
}
