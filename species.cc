#include "species.h"
#include "move.h"
#include "types.h"
#include <iostream>

Species::Species(std::string name, 
        int hp, int atk, int def, 
        int spatk, int spdef, int spe) :
    Pokemon(name, hp, atk, def, spatk, spdef, spe) {}

void Species::calcDamage(Move& m, const double mult) {
    double tmp = (2 * level / 5 + 2) * m.getBP() / 50;
    if (m.getPS() == Category::Physical) {
        tmp *= 100.0 / stats[2]; // stats[2] = def
    } else {
        tmp *= 100.0 / stats[4]; // stats[4] = spdef
    }
    const int dmg = tmp * mult;
    std::cout << name << " took " << dmg << " damage!" << std::endl;
    hp -= dmg;
    if (hp > 0) {
        std::cout << name << " has " << hp << "/" << max_hp << " HP left." << std::endl;
    } else {
        std::cout << name << " fainted!" << std::endl;
    }
}

void Species::printHit(const double mult) const {
    if (mult > 1) {
        std::cout << "It's super effective!" << std::endl;
    } else if (mult < 1) {
        std::cout << "It's not very effective..." << std::endl;
    }
}

void Species::hitBy(WaterMove& wm, const double mult) {
    if (hp <= 0) return;
    printHit(mult);
    calcDamage(wm, mult);
}

void Species::hitBy(FireMove& wm, const double mult) {
    if (hp <= 0) return;
    printHit(mult);
    calcDamage(wm, mult);
}

void Species::hitBy(GrassMove& wm, const double mult) {
    if (hp <= 0) return;
    printHit(mult);
    calcDamage(wm, mult);
}

void Species::hitBy(ElectricMove& wm, const double mult) {
    if (hp <= 0) return;
    printHit(mult);
    calcDamage(wm, mult);
}