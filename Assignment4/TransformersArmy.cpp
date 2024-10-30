/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMERS_ARMY_CPP
#define TRANSFORMERS_ARMY_CPP

#include <string>
#include "TransformersArmy.h"

TransformersArmy::TransformersArmy(): armyName("Unknown army") {
}

TransformersArmy::TransformersArmy(const std::string armyName): armyName(armyName) {
    this->transformers = std::vector<Transformer *>();
}

void TransformersArmy::addTransformer(Transformer* transformer) {
    this->transformers.push_back(transformer);
}

std::vector<Transformer*> TransformersArmy::getTransformers() {
    return transformers;
}

std::string TransformersArmy::getName() {
    return armyName;
}

void TransformersArmy::setName(const std::string name) {
    this->armyName = name;
}

std::string TransformersArmy::toString() {
    std::string armyInfo = "----TRANSFORMERS ARMY INFO----\n";
    armyInfo += "Army name: " + armyName + "\n";

    for(int i = 0; i < transformers.size(); i++) {
        armyInfo += transformers[i]->toString() + "\n";
        armyInfo += "\n";
    }

    return armyInfo;

}

#endif
