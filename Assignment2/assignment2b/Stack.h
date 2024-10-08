/*
Sviridenko Elena st130482@student.spbu.ru
implementation of reverse polish notation and its calculation using stack class
*/

#ifndef STACK_H
#define STACK_H 
class Stack {
private:
    double* arr;        
    int capacity;    
    int top;         

public:
    Stack(int size);
    
    ~Stack();
   
    void push(double value);

    double pop();
};
    
#endif
