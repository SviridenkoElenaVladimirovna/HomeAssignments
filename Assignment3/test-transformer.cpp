#include "gtest/gtest.h"

#include "Transformer.h"
#include "TransformerWarrior.h"
#include "TransformerOfficer.h"
#include "TransformerLeader.h"

int main(int argc, char **argv)
{
std::cout<<"tests main";
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}

TEST(TransformersTest, OfficerEmptyConstructor) {
    Transformer* transformer = new TransformerOfficer();
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Officer");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Airplane");
    delete transformer;
}

TEST(TransformersTest, OfficerNotEmptyConstructor) {
    Transformer* transformer = 
        new TransformerOfficer("Solder", "Typical autobot", "Hate flowers");
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Officer");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Airplane");
    delete transformer;
}

TEST(TransformersTest, WarrierEmptyConstructor) {
    Transformer* transformer = new TransformerWarrior();
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Warrior");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Simple car");
    delete transformer;
}

TEST(TransformersTest, WarrierNotEmptyConstructor) {
    Transformer* transformer = 
        new TransformerWarrior("Solder", "Typical autobot", "Hate flowers");
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Warrior");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Simple car");
    delete transformer;
}

TEST(TransformersTest, LeaderEmptyConstructor) {
    Transformer* transformer = new TransformerLeader();
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Leader");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Really big truck");
    delete transformer;
}

TEST(TransformersTest, LeaderNotEmptyConstructor) {
    Transformer* transformer = 
        new TransformerLeader("Solder", "Typical autobot", "Hate flowers");
    ASSERT_STREQ(transformer->getRank().getName().c_str(), "Leader");
    ASSERT_STREQ(transformer->favoriteVehicle().c_str(), "Really big truck");
    delete transformer;
}
