#include <iostream>

struct Node
{

    int data;
    Node *next;

};

class Queue
{

    Node *top = nullptr;
    Node *bottom = nullptr;
    int length = 0;   
    
    void enqueue(int data)
    {
        if (length == 0)
        {
           Node newNode = {data, nullptr};

           top = &newNode;
           bottom = &newNode;

           length++;

        } else {
            Node newNode = {data, top};

            top = &newNode;
            length++;

        }

    }

    void dequeue(int data)
    {
        if (length == 0)
        {
           std::cout << "cannot dequeue when there's nothing in the queue" << std::endl; 
        } else if (length == 1)
        {
            
        }
        
    }


};