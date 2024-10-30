#ifndef TRANSFORMER_OFFICER_H
#define TRANSFORMER_OFFICER_H

#include "TransformerWarrior.h"

class TransformerOfficer : public TransformerWarrior {
protected:
	void calculateStrength() override;

public:
	TransformerOfficer();
	TransformerOfficer(const std::string name, const std::string character, const std::string hobby);
	TransformerOfficer(
		const std::string name,
		const std::string character,
		const std::string hobby,
		const int strength);

	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerOfficer();
};

#endif