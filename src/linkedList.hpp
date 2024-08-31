#include "node.hpp"
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

template <typename T>
class LinkedList
{
public:
    LinkedList();
    void createNode(T value);
    void printList();
    void pushNode(T value);
    void insertAtPosition(int pos, T value);
    T pop();
    T rmLast();
    T rmByIndex(int n);

private:
    Node<T> *head;
    Node<T> *tail;
};

#endif