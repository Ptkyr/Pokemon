#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "pokemon.h"
#include <memory>

class PokemonDecorator: public Pokemon {
protected:
    std::unique_ptr<Pokemon> p;
public:
    PokemonDecorator(Pokemon* p);
    virtual ~PokemonDecorator() = 0;

    void hitBy(WaterMove& wm, const double mult = 1) override;
    void hitBy(FireMove& fm, const double mult = 1) override;
    void hitBy(GrassMove& gm, const double mult = 1) override;
    void hitBy(ElectricMove& gm, const double mult = 1) override;
    void hitBy(GroundMove& gm, const double mult = 1) override;
};


#endif