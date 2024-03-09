#include <iostream>

struct Node {

    int data;
    struct Node *next;
};


class Stack {


public:
    Stack() {
        top = nullptr;
    }


    void push(int inputData) {
        Node *temp = new Node;
        temp->data = inputData;
        temp->next = this->top;

        if (size > max) {
            std::cout << "Stack Overflow!!";
            exit(0);
        }
        
        if (temp->next == nullptr) {
            size++;
            top = temp;

        } else {
            size++;
            temp->next = top;
            top = temp;

        }

    }

    void pop() {
        size--;
        Node *newTop = top->next;
        delete top;
        top = newTop;

    }

    void peek() {
        std::cout << top->data << std::endl;

    }


private:
    Node *top;
    
    int max = 1000;
    int size = 0;   

    };

int main() {

    Stack test;
    test.push(1);
    test.push(2);

    test.peek();

    test.pop();
    test.peek();


}

