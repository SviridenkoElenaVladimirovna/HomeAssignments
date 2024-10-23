/*
Sviridenko Elena st130482@student.spbu.ru
build class hierarchy using association and composition using with tests
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

int main() {
	std::cout << "Transformers hierarchy\n";
	
	TransformersArmy autobotArmy = buildAutobotArmy();
	TransformersArmy decepticonArmy = buildDecepticonArmy();

	std::cout << "=====================\n";
	std::cout << autobotArmy.toString();
	std::cout << "=====================\n";
	std::cout << decepticonArmy.toString();
	std::cout << "=====================\n";

	return 0;
}
