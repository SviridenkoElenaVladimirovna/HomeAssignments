/*
Sviridenko Elena st130482@student.spbu.ru
implementation of reverse polish notation and its calculation using stack class
*/
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <cmath> 
#include "Stack.h"
#include "EvaluateRPN.h"

double evaluateRPN(const std::string& expr) {
    Stack stack(expr.size());
    
    std::istringstream input(expr);
    std::string token;

    while (input >> token) {
        if (isdigit(token[0])) { 
            stack.push(std::stod(token)); 
        } else {
            double right = stack.pop();
            double left = stack.pop();

            switch (token[0]) {
                case '+':
                    stack.push(left + right);
                    break;
                case '-':
                    stack.push(left - right);
                    break;
                case '*':
                    stack.push(left * right);
                    break;
                case '/':
                    if (right == 0) {
                        throw std::runtime_error("Division by zero");
                    }
                    stack.push(left / right);
                    break;
                case '^':
                    stack.push(static_cast<double>(pow(left, right)));
                    break;
                default:
                    throw std::invalid_argument("Unknown operator: " + token[0]);
            }
        }
    }
    return stack.pop();
}
