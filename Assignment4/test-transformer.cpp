 /*
Sviridenko Elena st130482@student.spbu.ru
Implementation of operator overloading << for outputting a string to any input/output stream. Implementation of operators >, < for comparing objects. Implementation of constructor overloading. Reworking tests to check the implemented functionality.
*/

 #include "gtest/gtest.h"

 #include "Transformer.h"
 #include "TransformerWarrior.h"
 #include "TransformerOfficer.h"
 #include "TransformerLeader.h"
 #include <sstream>

TEST(TransformerTest, OperatorStream) {
    std::string expectedOutput = "Name: Solder\n"
                                  "Character: Typical autobot\n"
                                  "Hobby: Hate flowers\n"
                                  "Favorite vehicle: Simple car\n"
                                  "Strength: 6.000000\n"
                                  "Rank\n"
                                  "Rank name: Warrior\n"
                                  "Rank experience: 20";

    Transformer* transformer = new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");
    std::ostringstream os;
    os << *transformer;
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(TransformerTest, OperatorLessThan) {
    TransformerWarrior transformer1("Solder", "Typical autobot", "Hate flowers", 5);
    TransformerWarrior transformer2("Optimus", "Leader", "Driving", 10);

    EXPECT_TRUE(transformer1 < transformer2); 
    EXPECT_FALSE(transformer2 < transformer1); 
}

TEST(TransformerTest, OperatorGreaterThan) {
    TransformerWarrior transformer1("Solder", "Typical autobot", "Hate flowers", 15);
    TransformerWarrior transformer2("Optimus", "Leader", "Driving", 10);

    EXPECT_TRUE(transformer1 > transformer2); 
    EXPECT_FALSE(transformer2 > transformer1); 
}

TEST(TransformerTest, ConstructorOverloads) {
    Transformer* transformer = new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");
    EXPECT_EQ(transformer->getName(), "Solder");
    EXPECT_EQ(transformer->getCharacter(), "Typical autobot");
    EXPECT_EQ(transformer->getHobby(), "Hate flowers");

    TransformerWarrior transformerWithCustomStrength("Optimus", "Leader", "Driving", 10);
    EXPECT_EQ(transformerWithCustomStrength.Transformer::getStrength(), 10);
}

TEST(TransformerTest, StrengthCalculationWarriorAndOfficer) {
    Transformer* warrior = new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");
    Transformer* officer = new TransformerOfficer("Officer", "Kind and friendly", "Love butterflies");
    EXPECT_LT(warrior->getStrength(), officer->getStrength());
}

TEST(TransformerTest, StrengthCalculationOfficerAndLeader) {
    Transformer* officer = new TransformerOfficer("Officer", "Kind and friendly", "Love butterflies");
    Transformer* leader = new TransformerLeader("Megatron", "Smart, ruthless and determined", "Love authority");
    EXPECT_LT(officer->getStrength(), leader->getStrength());
}

TEST(TransformerTest, StrengthWithOverloadedConstructor) {
    Transformer* warrior = new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");
    EXPECT_EQ(warrior->getStrength(), 6); 
   
    Transformer* officer = new TransformerOfficer("Officer", "Kind and friendly", "Love butterflies");
    EXPECT_EQ(officer->getStrength(), 25);
    
    Transformer* leader = new TransformerLeader("Megatron", "Smart, ruthless and determined", "Love authority");
    EXPECT_EQ(leader->getStrength(), 80); 
}

int main(int argc, char **argv){
    std::cout<<"tests main";
    ::testing::InitGoogleTest(&argc, argv);
  
    return RUN_ALL_TESTS();
}
