/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_LEADER_CPP
#define TRANSFORMER_LEADER_CPP

#include "TransformerLeader.h"

TransformerLeader::TransformerLeader(): TransformerOfficer() {
    calculateStrength();
}

TransformerLeader::TransformerLeader(const std::string name, const std::string character, const std::string hobby)
    : TransformerOfficer(name, character, hobby) {
    this->transformerRank = TransformerRank("Leader", 100);
    calculateStrength();
}

TransformerLeader::TransformerLeader(
    const std::string name,
    const std::string character,
    const std::string hobby,
    const int strength)
    : TransformerOfficer(name, character, hobby, strength) {
    this->transformerRank = TransformerRank("Leader", 100);
}

std::string TransformerLeader::favoriteVehicle() {
    return "Really big truck";
}

TransformerRank TransformerLeader::getRank() {
    return transformerRank;
}

TransformerLeader::~TransformerLeader() {
}

void TransformerLeader::calculateStrength() {
    strength = this->transformerRank.getExperience() * 0.8;
}

#endif
