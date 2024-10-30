/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMERS_ARMY_H
#define TRANSFORMERS_ARMY_H

#include <vector>
#include <ostream>
#include "Transformer.h"

class TransformersArmy {
private:
	std::string armyName;
	std::vector<Transformer*> transformers;
public:
	TransformersArmy();
	TransformersArmy(const std::string armyName);

	void addTransformer(Transformer* transformer);
	std::vector<Transformer*> getTransformers();
	std::string getName();
	void setName(const std::string name);

	std::string toString();

	friend std::ostream &operator<<(std::ostream &os, TransformersArmy &army) {
		os << "Army name: " << army.getName() << std::endl;

		for (int i = 0; i < army.transformers.size(); i++) {
			os << "---\n";
			os << *(army.transformers[i]) << "\n";
			os << "---\n";
		}

		return os;
	}
};

#endif
