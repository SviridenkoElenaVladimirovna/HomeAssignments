/*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

#include "Transformer.h"
#include "TransformerLeader.h"
#include "TransformerOfficer.h"
#include "TransformerWarrior.h"
#include "TransformersArmy.h"
#include "iostream"

TransformersArmy buildAutobotArmy() {
	TransformersArmy autobotArmy = TransformersArmy("Autobots");

	Transformer* warrior =
		new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");

	Transformer* officer =
		new TransformerOfficer("Officer", "Angry and unfriendly", "Hate butterflies");

	Transformer* leader = new TransformerLeader(
		"Optimus Prime", "Excellent tactician, takes care of his subordinates", "Love his people");

	autobotArmy.addTransformer(warrior);
	autobotArmy.addTransformer(officer);
	autobotArmy.addTransformer(leader);

	return autobotArmy;
}

TransformersArmy buildDecepticonArmy() {
	TransformersArmy decepticonArmy = TransformersArmy("Decepticons");

	Transformer* warrior =
		new TransformerWarrior("Solder", "Typical decepticon", "Love flowers");

	Transformer* officer =
		new TransformerOfficer("Officer", "Kind and friendly", "Love butterflies");

	Transformer* leader =
		new TransformerLeader("Megatron", "Smart, ruthless and determined", "Love authority");

	decepticonArmy.addTransformer(warrior);
	decepticonArmy.addTransformer(officer);
	decepticonArmy.addTransformer(leader);

	return decepticonArmy;
}

Transformer* findStrongestTransformerInArmy(TransformersArmy transformersArmy) {
	std::vector<Transformer*> transformersInArmy = transformersArmy.getTransformers();
	Transformer* strongestTransformer = transformersInArmy[0];

	for (int i = 1; i < transformersInArmy.size(); i++) {
		if (*transformersInArmy[i] > *strongestTransformer) {
			strongestTransformer = transformersInArmy[i];
		}
	}

	return strongestTransformer;
}

int main() {
	const std::string DELIMITER = "=====================\n";

	std::cout << "Transformers hierarchy\n";
	
	TransformersArmy autobotArmy = buildAutobotArmy();
	TransformersArmy decepticonArmy = buildDecepticonArmy();

	std::cout << DELIMITER
			<< autobotArmy
			<< DELIMITER
			<< decepticonArmy
			<< DELIMITER;

	std::cout << "Strongest transformer in autobots army"
			<< "\n"
			<< *findStrongestTransformerInArmy(autobotArmy)
	        << "\n";

	std::cout << DELIMITER;

	std::cout << "Strongest transformer in decepticons army"
				<< "\n"
				<< *findStrongestTransformerInArmy(decepticonArmy)
				<< "\n";

	return 0;
}
