#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include "Creature.h"
namespace cs_creature{


   class Human: public Creature{
public:

    Human() : Creature(){};
    Human(int newStrength, int newHitpoints) : Creature(newStrength, newHitpoints){};
   std::string getSpecies() const;
   int getDamage() const;

   } ;
}


#endif // HUMAN_H_INCLUDED
