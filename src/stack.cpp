#include <iostream>
#include "stack.h"

Stack::Stack() {

    top = nullptr;
}


void Stack::push(T inputData) {

        Node<T> *temp = new Node<T>;
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

void Stack::pop() {

        size--;
        Node<T> *newTop = top->next;
        delete top;
        top = newTop;    
}

void Stack::peek() {

    std::cout << top->data << std::endl;

}
