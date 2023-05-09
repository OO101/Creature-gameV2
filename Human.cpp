#include "Human.h"
#include <iostream>
#include <string>
using namespace std;
namespace cs_creature{


string Human::getSpecies() const
{
    return "human";
}
int Human::getDamage() const
{
    int damage = Creature::getDamage();
    cout <<"The " << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
}

}
