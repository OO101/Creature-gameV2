#ifndef ELF_H_INCLUDED
#define ELF_H_INCLUDED
#include "Creature.h"
namespace cs_creature{

class Elf : public Creature{

public:
    Elf() : Creature() {};
 Elf(int newStrength, int newHitpoints) : Creature (newStrength, newHitpoints){};
std::string getSpecies() const;
int getDamage() const;

};
}
#endif // ELF_H_INCLUDED
