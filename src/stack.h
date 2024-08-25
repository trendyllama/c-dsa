
#include "node.h"

#ifndef STACK_H
#define STACK_H

 
template <typename T>
class Stack
{

private:
    Node<T> *top;
    int max = 1000;
    int size = 0;

public:
    
    Stack(){}
    void push(T inputData){}
    void pop(){}
    void peek(){}
};

#endif