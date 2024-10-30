/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#ifndef TRANSFORMER_LEADER_H
#define TRANSFORMER_LEADER_H

#include "TransformerOfficer.h"

class TransformerLeader : public TransformerOfficer {
protected:
	void calculateStrength() override;

public:
	TransformerLeader();
	TransformerLeader(const std::string name, const std::string character, const std::string hobby);
	TransformerLeader(
		const std::string name,
		const std::string character,
		const std::string hobby,
		const int strength);

	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerLeader();
};

#endif
