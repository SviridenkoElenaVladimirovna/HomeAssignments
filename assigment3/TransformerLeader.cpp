#ifndef TRANSFORMER_LEADER_CPP
#define TRANSFORMER_LEADER_CPP

#include "TransformerLeader.h"

TransformerLeader::TransformerLeader(): TransformerOfficer() {
}

TransformerLeader::TransformerLeader(const std::string name, const std::string character, const std::string hobby)
    : TransformerOfficer(name, character, hobby) {
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

#endif
