#include <iostream>
#include "TemplateClass.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"

int main() {
    Class1 obj1;
    TemplateClass<Class1> tc1(obj1);
    std::cout << "Class1 foo: " << tc1.foo() << std::endl;

    Class2 obj2;
    TemplateClass<Class2> tc2(obj2);
    std::cout << "Class2 foo: " << tc2.foo() << std::endl;

    Class3 obj3;
    TemplateClass<Class3> tc3(obj3);
    std::cout << "Class3 foo: " << tc3.foo() << std::endl;
    return 0;
}
