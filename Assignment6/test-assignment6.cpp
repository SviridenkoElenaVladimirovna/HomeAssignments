/*
Sviridenko Elena st130482@student.spbu.ru
Created a template class, created partial specialization of this template class for int and double, added tests
*/
#include <gtest/gtest.h>
#include "TemplateClass.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

TEST(Class1Test, FooReturnsTrue) {
    Class1 obj;
    TemplateClass<Class1> tc(obj);
    tc.number_=1;
    EXPECT_TRUE(tc.foo()); 
}

TEST(Class1Test, FooReturnsFalse) {
    Class1 obj;
    TemplateClass<Class1> tc(obj);
    EXPECT_FALSE(tc.foo()); 
}


TEST(Class2Test, FooReturnsTrue) {
    Class2 obj;
    TemplateClass<Class2> tc(obj);
    std::vector<float> vec = {1.0f}; 
    tc.vector_=vec;
    EXPECT_TRUE(tc.foo()); 
}

TEST(Class2Test, FooReturnsFalse) {
    Class2 obj;
    TemplateClass<Class2> tc(obj);
    std::vector<float> vec; 
    EXPECT_FALSE(tc.foo()); 
}


TEST(Class3Test, FooReturnsTrue) {
    Class3 obj;
    TemplateClass<Class3> tc(obj);
    std::vector<float> vec(1, 1.0f); 
    EXPECT_TRUE(tc.foo()); 
}

TEST(Class3Test, FooReturnsFalse) {
    Class3 obj;
    TemplateClass<Class3> tc(obj);
    std::vector<float> vec(2, 1.0f); 
    tc.vector_=vec;
    EXPECT_FALSE(tc.foo()); 
}


TEST(IntSpecializationTest, FooReturnsTrue) {
    TemplateClass<int> tc(5);
    EXPECT_TRUE(tc.foo()); 
}


TEST(DoubleSpecializationTest, FooReturnsFalse) {
    TemplateClass<double> tc(5.5);
    EXPECT_FALSE(tc.foo()); 
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

