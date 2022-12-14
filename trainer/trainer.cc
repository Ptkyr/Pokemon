#include "trainer.h"
#include "exceptions.h"
#include "pokemon.h"
#include "move.h"
#include <utility>
#include <stdexcept>
#include <iostream>
#include <random>

Trainer::Trainer(const std::string& s): name{s} {}

Trainer::~Trainer() = default;

Pokemon* Trainer::partyAt(const size_t x) const {
    return team.at(x).get();
}

const std::string& Trainer::getName() const {
    return name;
}

Pokemon* Trainer::getLead() const {
    return lead;
}

size_t Trainer::partySize() const {
    return team.size();
}

void Trainer::add(std::unique_ptr<Pokemon>& p) {
    if (team.size() == 6) {
        throw MaxTeamSize{};
    }
    team.emplace_back(std::move(p));
}

void Trainer::switchOut() {
    // Find the first alive pokemon
    //  and switch to it, return 
    //  nullptr if whole party is dead
    for (const auto& p: team) {
        if (!p->fainted()) {
            lead = p.get();
            return;
        }
    }
    lead = nullptr;
}

Move* Trainer::getMove() const {
    std::random_device rd;
    std::mt19937 gen{rd()};
    std::uniform_int_distribution<> dist{0, static_cast<int>(lead->moveCount() - 1)};
    Move* ret = nullptr;
    do {
        ret = lead->getMove(static_cast<size_t>(dist(gen)));
    } while (ret->getPP() <= 0); // Infinite loop if Struggle
    return ret;
}

std::istream& operator>>(std::istream& in, Trainer& t) {
    t.team.clear();
    while (in) {
        auto tmp = Pokemon::spawn(in);
        t.add(tmp);
    }
    t.lead = t.team.at(0).get();
    return in;
}

std::ostream& operator<<(std::ostream& out, Trainer& t) {
    out << std::endl;
    out << t.getName() << "'s party: " << std::endl;
    for (const auto& p: t.team) {
        out << *p;
    }
    return out;
}
