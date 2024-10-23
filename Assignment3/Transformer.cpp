/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_CPP
#define TRANSFORMER_CPP

#include "Transformer.h"

Transformer::Transformer(): transformerRank("Novice", 0) {
}

Transformer::Transformer(const std::string name, const std::string character, const std::string hobby)
    : transformerRank("Novice", 0) {
    this->name = name;
    this->character = character;
    this->hobby = hobby;
}

std::string Transformer::getName() {
    return this->name;
}

std::string Transformer::getCharacter() {
    return this->character;
}

std::string Transformer::getHobby() {
    return this->hobby;
}

void Transformer::setName(const std::string name) {
    this->name = name;
}

void Transformer::setCharacter(const std::string character) {
    this->character = character;
}

void Transformer::setHobby(const std::string hobby) {
    this->hobby = hobby;
}

std::string Transformer::toString() {
    return "Name: " + name + "\n" +
           "Character: " + character + "\n" +
           "Hobby: " + hobby + "\n" +
           "Favorite vehicle: " + this->favoriteVehicle() + "\n" +
           "Rank" + "\n" +
           this->getRank().toString();
}

Transformer::~Transformer() {
}

#endif
