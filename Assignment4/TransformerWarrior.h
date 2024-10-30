/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_WARRIOR_H
#define TRANSFORMER_WARRIOR_H

#include "Transformer.h"

class TransformerWarrior : public Transformer {
protected:
	void calculateStrength() override;

public:
	TransformerWarrior();
	TransformerWarrior(const std::string name,const std::string character,const std::string hobby);
	TransformerWarrior(
		const std::string name,
		const std::string character,
		const std::string hobby,
		const int strength);

	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerWarrior();
};
#endif
