/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "TransformerRank.h"

class Transformer {
protected:
	std::string name;
	std::string character;
	std::string hobby;
	TransformerRank transformerRank;
public:
	Transformer();
	Transformer(const std::string name, const std::string character, const std::string hobby);

	std::string getName();
	std::string getCharacter();
	std::string getHobby();
	void setName(const std::string name);
	void setCharacter(const std::string character);
	void setHobby(const std::string);

	std::string toString();

	virtual std::string favoriteVehicle() = 0;
	virtual TransformerRank getRank() = 0;

	~Transformer();
};

#endif
