#ifndef BALROG_H_INCLUDED
#define BALROG_H_INCLUDED
#include "Demon.h"
namespace cs_creature{

    class Balrog : public Demon{
 public:
    Balrog() : Demon(){};
Balrog(int newStrength, int newHitpoints): Demon(newStrength, newHitpoints){};
    std::string getSpecies() const;
    int getDamage() const;
    };
}

#endif // BALROG_H_INCLUDED
