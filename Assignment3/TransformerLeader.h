/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_LEADER_H
#define TRANSFORMER_LEADER_H

#include "TransformerOfficer.h"

class TransformerLeader : public TransformerOfficer {
public:
	TransformerLeader();

	TransformerLeader(const std::string name, const std::string character, const std::string hobby);

	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerLeader();
};

#endif
