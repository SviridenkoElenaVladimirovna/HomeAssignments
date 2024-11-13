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
 std::ostream &operator<<(std::ostream &os, TransformersArmy &army) {
		os << "Army name: " << army.getName() << std::endl;

		for (int i = 0; i < army.transformers.size(); i++) {
			os << "---\n";
			os << *(army.transformers[i]) << "\n";
			os << "---\n";
		}

		return os;
	}
void TransformersArmy::setName(const std::string name) {
    this->armyName = name;
}

#endif
