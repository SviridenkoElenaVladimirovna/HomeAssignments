/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_OFFICER_H
#define TRANSFORMER_OFFICER_H

#include "TransformerWarrior.h"

class TransformerOfficer : public TransformerWarrior {
public:
	TransformerOfficer();

	TransformerOfficer(const std::string name, const std::string character, const std::string hobby);

	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerOfficer();
};

#endif
