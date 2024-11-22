#include <iostream>
#include "node.hpp"

#ifndef STACK_HPP
#define STACK_HPP

template <typename T>
class Stack
{

private:
    Node<T> *top;
    int max = 1000;
    int size = 0;

public:
    Stack();
    void push(T inputData);
    void pop();
    void peek();
};



template <typename T>
Stack<T>::Stack()
{

    top = nullptr;
}

template <typename T>
void Stack<T>::push(T inputData)
{

    auto *temp = new Node<T>(inputData, this->top);

    if (size > max)
    {
        std::cout << "Stack Overflow!!";
        exit(0);
    }

    if (temp->next == nullptr)
    {
        size++;
        top = temp;
    }
    else
    {
        size++;
        temp->next = top;
        top = temp;
    }
}

template <typename T>
void Stack<T>::pop()
{

    if (top == nullptr)
    {
        std::cout << "Stack Underflow!!";
        exit(0);
    }

    if (top->next == nullptr)
    {
        delete top;
        top = nullptr;
        size--;

        std::cout << "Stack is empty" << std::endl;

        return;
    }

    size--;
    auto *newTop = top->next;
    delete top;
    top = newTop;
}

template <typename T>
void Stack<T>::peek()
{
    if (top == nullptr)
    {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    std::cout << top->data << std::endl;
}

#endif // STACK_HPP