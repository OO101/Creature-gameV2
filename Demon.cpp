#include "Demon.h"
#include <iostream>
namespace cs_creature{



    string Demon::getSpecies() const
    {
        return "demon";
    }

    int Demon::getDamage() const
    {
        int damage = Creature::getDamage();
        return damage;
    }

}
