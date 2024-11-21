
#include "gtest/gtest.h"

#include "Transformer.h"
#include <sstream>
#include "Autobot.h"
#include "Decepticon.h"


TEST(AutobotTestTransform, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 transformed\n"; 
    Autobot transformer("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.transform();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(AutobotTestOpenFire, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 opened fire\n"; 
    Autobot transformer("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.openFire();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(AutobotTestUlta, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 used ulta\n"; 
    Autobot transformer("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.ulta();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(DecepticonTestTransform, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 transformed\n"; 
    Decepticon transformer("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.transform();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(DecepticonTestOpenFire, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 opened fire\n"; 
    Decepticon transformer("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.openFire();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(DecepticonTestUlta, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 used ulta\n"; 
    Decepticon transformer("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer.ulta();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
}

TEST(AutobotTestOpenFireIndexed, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 transformed\n"; 
    Transformer* transformer = new Autobot("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->transform();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(AutobotTestTransformIndexed, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 opened fire\n"; 
    Transformer* transformer = new Autobot("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->openFire();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(AutobotTestUltaIndexed, TransformMethod) {
    std::string expectedOutput = "Autobot Transformer 1 used ulta\n"; 
    Transformer* transformer = new Autobot("Transformer 1"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->ulta();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(DecepticonTestTransformIndexed, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 transformed\n"; 
    Transformer* transformer = new Decepticon("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->transform();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(DecepticonTestOpenFireIndexed, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 opened fire\n"; 
    Transformer* transformer = new Decepticon("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->openFire();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(DecepticonTestUltaIndexed, TransformMethod) {
    std::string expectedOutput = "Decepticon Transformer 2 used ulta\n"; 
    Transformer* transformer = new Decepticon("Transformer 2"); 
    std::ostringstream os;
    std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());
    transformer->ulta();
    std::cout.rdbuf(oldCout); 
    EXPECT_EQ(os.str(), expectedOutput); 
    delete transformer; 
}

TEST(TransformTests, TestTransformers) {
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


    for (int i = 0; i < 5; ++i) {
        std::ostringstream os;
        std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());

        transformers[i]->transform();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Autobot Transformer " + std::to_string(i + 1) + " transformed\n");

        os.str("");
        os.clear();
        oldCout = std::cout.rdbuf(os.rdbuf());
        
        transformers[i]->openFire();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Autobot Transformer " + std::to_string(i + 1) + " opened fire\n");

        os.str("");
        os.clear();
        oldCout = std::cout.rdbuf(os.rdbuf());
        
        transformers[i]->ulta();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Autobot Transformer " + std::to_string(i + 1) + " used ulta\n");
    }

    for (int i = 5; i < 9; ++i) {
        std::ostringstream os;
        std::streambuf* oldCout = std::cout.rdbuf(os.rdbuf());

        transformers[i]->transform();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Decepticon Transformer " + std::to_string(i + 1) + " transformed\n");

        os.str("");
        os.clear();
        oldCout = std::cout.rdbuf(os.rdbuf());
        
        transformers[i]->openFire();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Decepticon Transformer " + std::to_string(i + 1) + " opened fire\n");

        os.str("");
        os.clear();
        oldCout = std::cout.rdbuf(os.rdbuf());
        
        transformers[i]->ulta();
        std::cout.rdbuf(oldCout);
        EXPECT_EQ(os.str(), "Decepticon Transformer " + std::to_string(i + 1) + " used ulta\n");
    }

    for (Transformer* t : transformers) {
        delete t;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

