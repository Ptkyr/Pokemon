#include "move.h"
#include "pokemon.h"

Move::Move(std::string n, Category c, int base, int pp): name{n}, cat{c}, bp{base}, pp{pp} {}

Move::~Move() = default;

int Move::getBP() const {
    return bp;
}

Category Move::getPS() const {
    return cat;
}

std::string Move::getName() const {
    return name;
}

void Move::use() {
    --pp;
}