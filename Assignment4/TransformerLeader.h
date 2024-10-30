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