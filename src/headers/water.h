#ifndef __WATER_H__
#define __WATER_H__

#include "pokdec.h"

class Water: public PokemonDecorator {
public:
    Water(Pokemon* p);

    void hitBy(WaterMove& wm, const double mult = 1) override;
    void hitBy(FireMove& fm, const double mult = 1) override;
    void hitBy(GrassMove& gm, const double mult = 1) override;
    void hitBy(ElectricMove& gm, const double mult = 1) override;
};

#endif
