#include "Creature.h"
#include <iostream>
using namespace std;
namespace cs_creature{
Creature::Creature() : strength(10) , hitpoints(10){}


Creature::Creature( int newStrength, int newHitpoints) : strength(newStrength), hitpoints(newHitpoints){}



string Creature::getSpecies() const{
return "creature";
}
int Creature::getDamage() const {
    int damage;

    // All Creatures inflict damage which is a random number up to their strength
    damage = (rand() % strength) + 1;

    return damage;
}

    int Creature::getStrength() const
    {
        return strength;
    }

    void Creature::setStrength(int TStrength)
    {
        strength = TStrength;
    }

    int Creature::getHitpoints() const
    {
        return hitpoints;
    }

    void Creature::setHitpoints(int THitpoints)
    {
        hitpoints = THitpoints;
    }

}
