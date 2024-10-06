#ifndef EVALUATERPN_H
#define EVALUATERPN_H 

#include <iostream>
#include <sstream>
#include <string>
#include <cstddef>
#include <stdexcept>
#include <cmath>

class Stack {
private:
    double* arr;        
    int capacity;    
    int top;         

public:
    Stack(int size) : capacity(size), top(-1) {
        arr = new double[capacity]; 
    }

    ~Stack() {
        delete[] arr; 
    }

    void push(double value) {
        if (top >= capacity - 1) {
            throw std::overflow_error("Stack overflow"); 
        }
        arr[++top] = value; 
    }

    double pop() {
        if (top < 0) {
            throw std::underflow_error("Stack underflow"); 
        }
        return arr[top--]; 
    }
};

double evaluateRPN(const std::string& expr);

#endif
