#include <iostream>
#include "node.h"

template <typename T>
class Queue
{

private:
    Node<T> *rear;
    Node<T> *front;

public:
    Queue()
    {
        rear = nullptr;
        front = nullptr;
    }

    ~Queue()
    {
        while (!is_empty())
        {
            dequeue();
        }
    }

    bool is_empty()
    {
        if (rear == nullptr && front == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(T data)
    {

        Node<T> *newNode = new Node<T>;

        if (is_empty())
        {

            newNode->data = data;
            newNode->next = nullptr;

            rear = newNode;
            front = newNode;
        }
        else
        {

            newNode->data = data;
            rear->next = newNode;

            // update rears previous value to our new node so
            // we can eventually dequeue the last node easily

            // change the address at rear to new node
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (is_empty())
        {

            std::cout << "cannot dequeue when there's nothing in the queue" << std::endl;
        }

        Node<T> *temp = front;

        if (rear == front)
        {

            front = rear = nullptr;
        }
        else
        {

            // front = nullptr;

            front = front->next;
        }

        delete temp;
    }

    T peek_rear()
    {
        if (is_empty())
        {
            std::cout << "queue is empty" << std::endl;
            return -1;
        }
        else
        {
            return rear->data;
        }
    }

    T peek_front()
    {
        if (is_empty())
        {
            std::cout << "queue is empty" << std::endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};
