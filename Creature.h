#ifndef CREATURE_H_INCLUDED
#define CREATURE_H_INCLUDED
#include <string>
namespace cs_creature{
class Creature {
    private:           // 0 human, 1 cyberdemon, 2 balrog, 3 elf
    int strength;                 // how much damage this Creature inflicts
    int hitpoints;                // how much damage this Creature can sustain
    std::string getSpecies() const;  // returns the type of the species






    public:
        Creature();                   // initialize to human, 10 strength, 10 hitpoints
        Creature( int newStrength, int newHitpoints);
        int getDamage() const;        // returns the amount of damage this Creature
        int getStrength() const;
        void setStrength( int TStrength);
         int getHitpoints() const;
         void setHitpoints( int THitpoints);
        static constexpr double DEMONIC_ATTACK_PROBABILITY = 0.25;
        static const int DEMONIC_BONUS_DAMAGE = 50;
        static constexpr double MAGICAL_ATTACK_PROBABILITY = 0.5;
        static constexpr double MAGICAL_ATTACK_MULTIPLIER = 2.0;
        static const int DEFAULT_STRENGTH = 10;
        static const int DEFAULT_HITPOINTS = 10;
                     // inflicts in one round of combat

        // also include appropriate accessors and mutators
};
}

#endif // CREATURE_H_INCLUDED
