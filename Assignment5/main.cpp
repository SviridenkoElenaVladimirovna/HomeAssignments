/*
Sviridenko Elena st130482@student.spbu.ru
3 virtual methods were implemented and tested
*/
#include "Autobot.h"
#include "Decepticon.h"
#include "iostream"
#include "Transformer.h"
#include "vector"

std::vector<Transformer*> buildTransformersVector() {
	std::vector<Transformer*> transformers;
	transformers.push_back(new Autobot("Transformer 1"));
	transformers.push_back(new Autobot("Transformer 2"));
	transformers.push_back(new Autobot("Transformer 3"));
	transformers.push_back(new Autobot("Transformer 4"));
	transformers.push_back(new Autobot("Transformer 5"));
	transformers.push_back(new Decepticon("Transformer 6"));
	transformers.push_back(new Decepticon("Transformer 7"));
	transformers.push_back(new Decepticon("Transformer 8"));
	transformers.push_back(new Decepticon("Transformer 9"));

	return transformers;
}

int main() {
	std::vector<Transformer*> transformers = buildTransformersVector();

	for (Transformer* transformer : transformers) {
		transformer->transform();
		transformer->openFire();
		transformer->ulta();
	}

	for (Transformer* transformer : transformers) {
		delete transformer;
	}

	return 0;
}
