#include "fire.h"

Fire::Fire(Pokemon* p): PokemonDecorator(p) {}

void Fire::hitBy(WaterMove& wm, const double mult) {
    p->hitBy(wm, mult * 2);
}

void Fire::hitBy(FireMove& wm, const double mult) {
    p->hitBy(wm, mult * 0.5);
}

void Fire::hitBy(GrassMove& wm, const double mult) {
    p->hitBy(wm, mult * 0.5);
}

void Fire::hitBy(GroundMove& gm, const double mult) {
    p->hitBy(gm, mult * 2);
}