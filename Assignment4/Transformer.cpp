/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_CPP
#define TRANSFORMER_CPP

#include "Transformer.h"

Transformer::Transformer(): transformerRank("Novice", 0) {
}

Transformer::Transformer(const std::string name, const std::string character, const std::string hobby)
    : name(name),
      character(character),
      hobby(hobby),
      transformerRank("Novice", 0) {
}

Transformer::Transformer(
    const std::string name, const std::string character, const std::string hobby, const int strength)
    : name(name),
      character(character),
      hobby(hobby),
      transformerRank("Novice", 0),
      strength(strength) {
}
std::ostream &operator<<(std::ostream &os, Transformer &transformer) {
    os << transformer.toString();
    return os;
}

bool Transformer::operator<(const Transformer& other) const {
    return this->strength < other.strength;
}

bool Transformer::operator>(const Transformer& other) const {
    return this->strength > other.strength;
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
double Transformer::getStrength()  {
        return this->strength; 
    }
std::string Transformer::toString() {
    return "Name: " + name + "\n" +
           "Character: " + character + "\n" +
           "Hobby: " + hobby + "\n" +
           "Favorite vehicle: " + this->favoriteVehicle() + "\n" +
           "Strength: " + std::to_string(this->strength) + "\n"
           "Rank" + "\n" +
           this->getRank().toString();
}

Transformer::~Transformer() {
}

#endif
