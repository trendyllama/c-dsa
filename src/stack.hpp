#include <iostream>
#include "node.hpp"


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

Stack<int>::Stack() {

    top = nullptr;
}


void Stack<int>::push(int inputData) {

        Node<int> *temp = new Node<int>;
        temp->data = inputData;
        temp->next = this->top;

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

void Stack<int>::pop() {

        size--;
        Node<int> *newTop = top->next;
        delete top;
        top = newTop;
}

void Stack<int>::peek() {

    std::cout << top->data << std::endl;

}
