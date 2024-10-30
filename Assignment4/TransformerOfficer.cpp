#ifndef TRANSFORMER_OFFICER_CPP
#define TRANSFORMER_OFFICER_CPP

#include "TransformerOfficer.h"

TransformerOfficer::TransformerOfficer(): TransformerWarrior() {
    calculateStrength();
}

TransformerOfficer::TransformerOfficer(const std::string name, const std::string character, const std::string hobby)
    : TransformerWarrior(name, character, hobby) {
    this->transformerRank = TransformerRank("Officer", 50);
    calculateStrength();
}

TransformerOfficer::TransformerOfficer(
    const std::string name,
    const std::string character,
    const std::string hobby,
    const int strength)
    : TransformerWarrior(name, character, hobby, strength) {
    this->transformerRank = TransformerRank("Officer", 50);
}

std::string TransformerOfficer::favoriteVehicle() {
    return "Airplane";
}

TransformerRank TransformerOfficer::getRank() {
    return transformerRank;
}

TransformerOfficer::~TransformerOfficer() {
}

void TransformerOfficer::calculateStrength() {
    strength = this->transformerRank.getExperience() * 0.5;
}

#endif
