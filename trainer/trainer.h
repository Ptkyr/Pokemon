#ifndef __TRAINER_H__
#define __TRAINER_H__

#include <string>
#include <vector>
#include <iostream>
#include <memory>

class Pokemon;
class Move;

class Trainer {
    std::string name;
    std::vector<std::unique_ptr<Pokemon>> team;
protected:
    Pokemon* lead = nullptr;
    Pokemon* partyAt(const size_t x) const;
public:
    Trainer(const std::string& s);
    virtual ~Trainer() = 0;

    const std::string& getName() const;
    Pokemon* getLead() const;
    size_t partySize() const;
    void add(std::unique_ptr<Pokemon>& p); 

    virtual void switchOut();
    virtual Move* getMove() const;

    // Overrides current team and reads in a team from standard formatting:
    // Name @ Item
    // Ability: a
    // Tera Type: t
    // EVs: x s1 / y s2 ...
    // n Nature
    // - Move1
    // - Move2
    // - Move3
    // - Move4
    //
    // There must be a newline between each Pokemon, and only one
    //  newline at the end of the team file
    friend std::istream& operator>>(std::istream& in, Trainer& t);
    // Prints out the entire party
    friend std::ostream& operator<<(std::ostream& out, Trainer& t);
};

#endif
