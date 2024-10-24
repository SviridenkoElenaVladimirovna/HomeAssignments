/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_WARRIOR_CPP
#define TRANSFORMER_WARRIOR_CPP

#include "TransformerWarrior.h"

TransformerWarrior::TransformerWarrior(): Transformer() {
    transformerRank = TransformerRank("Warrior", 20);
}

TransformerWarrior::TransformerWarrior(const std::string name, const std::string character, const std::string hobby)
    : Transformer(name, character, hobby) {
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

#endif
