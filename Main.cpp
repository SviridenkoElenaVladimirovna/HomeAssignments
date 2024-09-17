#include "HelloFunc.h" 
#include <iostream>
#include <string>

int main() {
 //очепятка в слове world
 printHello("wordl");
 
 std::string subject;
 while(true) {
    std::cin>>subject;
    printHello(subject);
 }
 
return 0;
}
