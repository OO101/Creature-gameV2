#include "Cyberdemon.h"
#include <iostream>
#include <string>
using namespace std;
namespace cs_creature{


string Cyberdemon::getSpecies() const {
    return "cyberdemon";

}
int Cyberdemon::getDamage() const{

int damage = Demon::getDamage();

cout << "The "<< getSpecies() << " attacks for " << damage << " points!" << endl;
 if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
    damage = damage + DEMONIC_BONUS_DAMAGE;
    cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
        }
 return damage;
}
}
