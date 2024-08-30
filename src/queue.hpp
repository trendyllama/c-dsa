#include <iostream>
#include "node.hpp"

#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue
{

private:
    Node<T> *rear;
    Node<T> *front;

public:
    Queue();
    ~Queue();
    bool is_empty();
    void enqueue(T data);
    void dequeue();
    T peek_rear();
    T peek_front();

};

#endif