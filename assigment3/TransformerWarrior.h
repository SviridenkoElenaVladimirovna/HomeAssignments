#ifndef TRANSFORMER_WARRIOR_H
#define TRANSFORMER_WARRIOR_H

#include "Transformer.h"

class TransformerWarrior : public Transformer {
public:
	TransformerWarrior();
	TransformerWarrior(const std::string name,const std::string character,const std::string hobby);
	std::string favoriteVehicle() override;
	TransformerRank getRank() override;

	~TransformerWarrior();
};
#endif