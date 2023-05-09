#include <iostream>
#include <string>
namespace cs_creature{



std::string Balrog::getSpecies() const
{
    return "balrog";
}

int Balrog::getDamage() const
{
    int damage = Creature::getDamage();
     cout << "The " << getSpecies() << " attacks for " << damage <<" points!" << endl;
    int damage2 = (rand() % Creature::getStrength()) + 1;
    cout << "balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;

    if (rand() % 100 * 0.01 < DEMONIC_ATTACK_PROBABILITY) {
    damage = damage + DEMONIC_BONUS_DAMAGE;
cout << "Demonic attack inflicts " << DEMONIC_BONUS_DAMAGE << " additional damage points!" << endl;
}

    return damage += damage2;
}
}
