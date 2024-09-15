#include "HelloFunc.h" 
#include <iostream>
#include <string>

int main() {

 printHello("wordl");
 
 std::string subject;
 while(true) {
    std::cin>>subject;
    printHello(subject);
 }
 
return 0;
}
