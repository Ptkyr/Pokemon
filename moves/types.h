#ifndef __TYPES_H__
#define __TYPES_H__

#include "move.h"
#include "termcodes.h"
#include <iostream>

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

class IceMove: public Move {
public:
    IceMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return ICE + name + RESET;
    }
};

class FightingMove: public Move {
public:
    FightingMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return FIGHTING + name + RESET;
    }
};

class PoisonMove: public Move {
public:
    PoisonMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return POISON + name + RESET;
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

class FlyingMove: public Move {
public:
    FlyingMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return FLYING + name + RESET;
    }
};

class PsychicMove: public Move {
public:
    PsychicMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return PSYCHIC + name + RESET;
    }
};

class BugMove: public Move {
public:
    BugMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return BUG + name + RESET;
    }
};

class RockMove: public Move {
public:
    RockMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return ROCK + name + RESET;
    }
};

class GhostMove: public Move {
public:
    GhostMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return GHOST + name + RESET;
    }
};

class DragonMove: public Move {
public:
    DragonMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return DRAGON + name + RESET;
    }
};

class DarkMove: public Move {
public:
    DarkMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return DARK + name + RESET;
    }
};

class SteelMove: public Move {
public:
    SteelMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return STEEL + name + RESET;
    }
};

class FairyMove: public Move {
public:
    FairyMove(std::string n, Category c, int bp, int pp) : Move(n, c, bp, pp) {}
    void hit(Pokemon& p) override {
        p.hitBy(*this);
    }
    std::string getName() const override {
        return FAIRY + name + RESET;
    }
};

#endif
