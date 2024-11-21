/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Transformer {
protected:
	std::string name;
public:
	Transformer();
	Transformer(const std::string name);

	std::string getName();
	void setName(const std::string name);

	virtual void transform() = 0;
	virtual void openFire() = 0;
	virtual void ulta() = 0;

	~Transformer();
};

#endif
