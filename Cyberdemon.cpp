#include "Cyberdemon.h"
#include <iostream>
using namespace std;
namespace cs_creature{


string Cyberdemon::getSpecies() const {
    return "cyberdemon";

}
int Cyberdemon::getDamage() const{

int damage = Demon::getDamage();

cout << "The "<< getSpecies() << " attacks for " << damage << " points!" << endl;
 if(rand() % 4 == 0)
 {
     cout << "Demonic attack inflicts 50 additional damage points!" << endl;
     return (damage + 50);
 }
 return damage;
}
}
