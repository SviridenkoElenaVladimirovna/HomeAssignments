/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_RANK_CPP
#define TRANSFORMER_RANK_CPP

#include "TransformerRank.h"

TransformerRank::TransformerRank(const std::string name, const int experience) {
    this->name = name;
    this->experience = experience;
}

std::string TransformerRank::getName() {
    return this->name;
}

void TransformerRank::setName(const std::string name) {
    this->name = name;
}

int TransformerRank::getExperience() {
    return this->experience;
}

void TransformerRank::setExperience(const int experience) {
    this->experience = experience;
}

std::string TransformerRank::toString() {
    return "Rank name: " + this->name + "\n" +
        "Rank experience: " + std::to_string(this->experience);
}

TransformerRank::~TransformerRank() {
}

#endif
