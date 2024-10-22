#ifndef TRANSFORMERS_ARMY_H
#define TRANSFORMERS_ARMY_H

#include <vector>
#include "Transformer.h"

class TransformersArmy {
private:
	std::string armyName;
	std::vector<Transformer*> transformers;
public:
	TransformersArmy();
	TransformersArmy(const std::string armyName);
	void addTransformer(Transformer* transformer);
	std::string getName();
	void setName(const std::string name);
	std::string toString();
	~TransformersArmy();
};
#endif