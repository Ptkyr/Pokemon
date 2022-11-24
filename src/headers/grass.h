#ifndef __GRASS_H__
#define __GRASS_H__

#include "pokdec.h"

class Grass: public PokemonDecorator {
public:
    Grass(Pokemon* p);

    void hitBy(WaterMove& wm, const double mult = 1) override;
    void hitBy(FireMove& fm, const double mult = 1) override;
    void hitBy(GrassMove& gm, const double mult = 1) override;
    void hitBy(ElectricMove& gm, const double mult = 1) override;
};

#endif
