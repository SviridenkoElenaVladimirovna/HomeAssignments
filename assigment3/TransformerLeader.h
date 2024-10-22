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