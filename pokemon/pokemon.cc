#include "pokemon.h"
#include "move.h"
#include "pokedex.h"
#include "termcodes.h"
#include <iomanip>

std::unique_ptr<Pokemon> Pokemon::spawn(std::istream& in) {
    Pokedex dex;
    std::string name;
    std::getline(in, name, '@');
    name.pop_back();
    auto tmp = dex.spawn(name);
    std::string buffer;
    while (getline(in, buffer)) {
        if (buffer == "") break;
        if (buffer[0] == '-') {
            buffer.pop_back();
            buffer.pop_back();
            tmp->learn(makeMove(buffer.substr(2)));
        }
    }
    return tmp;
}

std::ostream& operator<<(std::ostream& out, const Pokemon& p) {
    // Top buffer and centering
    out << std::endl 
        << std::setw(5) << "" 
        << std::setw(20) << std::left << p.getName();
    std::string hp_display;
    if (p.HP() > 0) {
        hp_display = std::to_string(p.HP()) + "/" + std::to_string(p.maxHP());
    } else {
        hp_display = "XXX";
        out << Termcode::RED;
    }
    out << std::setw(10) << std::right << hp_display 
        << Termcode::RESET << std::endl;
    // Display all moves
    for (size_t i = 0; i < p.moveCount(); ++i) {
        const Move* tmp_move = p.getMove(i);
        if (i == 2) out << std::endl;
        // Termcodes with setw are annoying
        out << tmp_move->getColour()
            << std::setw(15) << std::left << tmp_move->getName()
            << Termcode::RESET 
            << std::setw(2) << std::right << tmp_move->getPP()
            << std::setw(6) << ""; // Space between moves
    }
    out << std::endl; // Bottom buffer
    return out;
}
