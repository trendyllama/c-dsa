#include <iostream>

template <typename T>
struct Node {

    T data;
    struct Node *next;
};


template <typename T>
class Stack {


private:
    Node<T> *top;
    
    int max = 1000;
    int size = 0;  

public:
    Stack() {
        top = nullptr;
    }


    void push(T inputData) {
        Node<T> *temp = new Node<T>;
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
        Node<T> *newTop = top->next;
        delete top;
        top = newTop;

    }

    void peek() {
        std::cout << top->data << std::endl;

    }

};

int main() {

    Stack<int> test;
    test.push(1);
    test.push(2);

    test.peek();

    test.pop();
    test.peek();

}
