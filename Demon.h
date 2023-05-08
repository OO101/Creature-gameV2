#ifndef DEMON_H_INCLUDED
#define DEMON_H_INCLUDED
#include <iostream>
using namespace std;
#include "Creature.h"
namespace cs_creature{

class Demon : public Creature{

public:
    Demon() : Creature() {};
    Demon(int newStrength, int newHitpoints): Creature(newStrength, newHitpoints){};
    std::string getSpecies() const;
    int getDamage() const;
};
}


#endif // DEMON_H_INCLUDED
