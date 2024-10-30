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