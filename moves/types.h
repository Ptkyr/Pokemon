#ifndef __TYPES_H__
#define __TYPES_H__

#include "move.h"
#include "termcodes.h"
#include <iostream>

class WaterMove: public Move {
public:
    WaterMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return WATER + name + RESET;
    }
};

class FireMove: public Move {
public:
    FireMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return FIRE + name + RESET;
    }
};

class GrassMove: public Move {
public:
    GrassMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return GRASS + name + RESET;
    }
};

class ElectricMove: public Move {
public:
    ElectricMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return ELECTRIC + name + RESET;
    }
};

class GroundMove: public Move {
public:
    GroundMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return GROUND + name + RESET;
    }
};

class NormalMove: public Move {
public:
    NormalMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return NORMAL + name + RESET;
    }
};

#endif
