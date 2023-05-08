#ifndef CYBERDEMON_H_INCLUDED
#define CYBERDEMON_H_INCLUDED
#include "Demon.h"
namespace cs_creature{
class Cyberdemon: public Demon{

public:
    Cyberdemon() : Demon(){};
    Cyberdemon(int newStrength, int newHitpoints): Demon(newStrength, newHitpoints){};
    std::string getSpecies() const;
    int getDamage() const;
};
}


#endif // CYBERDEMON_H_INCLUDED
