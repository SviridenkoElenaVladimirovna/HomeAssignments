#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <cmath> 

#include "EvaluateRPN.h" 

int main() {
    std::string expression ;
    std::getline(std::cin, expression); 

    try {
        const double result = evaluateRPN(expression);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
