#include "node.hpp"


template <typename T>
class LinkedList
{
public:
    LinkedList() {}
    void createNode(T value) {}
    void printList() {}
    void pushNode(T value) {}
    void insertAtPosition(int pos, T value) {}
    T pop() {}
    int rmLast() {}
    int rmByIndex(int n) {}

private:
    Node<T> *head;
    Node<T> *tail;
};
