#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <ostream>
#include "TransformerRank.h"

class Transformer {
protected:
	std::string name;
	std::string character;
	std::string hobby;
	TransformerRank transformerRank;
	double strength;

	virtual void calculateStrength() = 0;
public:
	Transformer();
	Transformer(const std::string name, const std::string character, const std::string hobby);
	Transformer(const std::string name, const std::string character, const std::string hobby, const int strength);

	std::string getName();
	std::string getCharacter();
	std::string getHobby();
	double getStrength();
	void setName(const std::string name);
	void setCharacter(const std::string character);
	void setHobby(const std::string);

	std::string toString();

	virtual std::string favoriteVehicle() = 0;
	virtual TransformerRank getRank() = 0;

	~Transformer();


	friend std::ostream &operator<<(std::ostream &os, Transformer &transformer) {
		os << transformer.toString();
		return os;
	}

	
	bool operator<(const Transformer& other) const {
		return this->strength < other.strength;
	}

	
	bool operator>(const Transformer& other) const {
		return this->strength > other.strength;
	}
};

#endif
