/*
Sviridenko Elena st130482@student.spbu.ru
implementation of reverse polish notation and its calculation using stack class
*/
#include <cstddef>
#include <stdexcept>
#include "Stack.h"

 Stack::Stack(int size) : capacity(size), top(-1) {
    arr = new double[capacity]; 
 }

 Stack::~Stack() {
    delete[] arr; 
 }
 
 void Stack::push(double value) {
        if (top >= capacity - 1) {
            throw std::overflow_error("Stack overflow"); 
        }
        arr[++top] = value; 
    }
 double Stack::pop() {
        if (top < 0) {
            throw std::underflow_error("Stack underflow"); 
        }
        return arr[top--]; 
 }
