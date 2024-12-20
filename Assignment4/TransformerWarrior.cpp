/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_WARRIOR_CPP
#define TRANSFORMER_WARRIOR_CPP

#include "TransformerWarrior.h"

TransformerWarrior::TransformerWarrior(): Transformer() {
    transformerRank = TransformerRank("Warrior", 20);
    calculateStrength();
}

TransformerWarrior::TransformerWarrior(const std::string name, const std::string character, const std::string hobby)
    : Transformer(name, character, hobby) {
    transformerRank = TransformerRank("Warrior", 20);
    calculateStrength();
}

TransformerWarrior::TransformerWarrior(
    const std::string name,
    const std::string character,
    const std::string hobby,
    const int strength)
    : Transformer(name, character, hobby, strength) {
    transformerRank = TransformerRank("Warrior", 20);
}

std::string TransformerWarrior::favoriteVehicle() {
    return "Simple car";
}

TransformerRank TransformerWarrior::getRank() {
    return transformerRank;
}

TransformerWarrior::~TransformerWarrior() {
}

void TransformerWarrior::calculateStrength() {
    strength = transformerRank.getExperience() * 0.3;
}

#endif
