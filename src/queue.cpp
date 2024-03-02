#include <iostream>

struct Node
{

    int data;
    Node *next;

};

class Queue
{

private:

    Node *rear;
    Node *front;

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
        if (rear == nullptr && front == nullptr) {
            return true;
        } else {
            return false;
        }
    }
    
    void enqueue(int data)
    {

        Node *newNode =  new Node;
        
        if (is_empty()) {

           newNode->data = data;
           newNode->next = nullptr;
           
           rear = newNode;
           front = newNode;


        } else {

            newNode->data = data;
            rear->next = newNode;
            
            //update rears previous value to our new node so
            //we can eventually dequeue the last node easily

            //change the address at rear to new node
            rear = newNode;


        }

    }

    void dequeue()
    {
        if (is_empty()) {

           std::cout << "cannot dequeue when there's nothing in the queue" << std::endl; 

        } 

        Node *temp = front;
        
        if (rear == front) {

            front = rear = nullptr;

        } else {


            //front = nullptr;


            front = front->next;
            
        }


        delete temp;
        
    }

    int peek_rear()
    {
        if (is_empty()) {
            std::cout << "queue is empty" << std::endl;
            return -1;

        } else {
            return rear->data;
        }
    }

    int peek_front()
    {
        if (is_empty()) {
            std::cout << "queue is empty" << std::endl;
            return -1;

        } else {
            return front->data;
        }
    }

};

int main()
{
    Queue example_queue;

    example_queue.enqueue(10);
    example_queue.enqueue(20);
    example_queue.enqueue(30);
    example_queue.enqueue(40);

    std::cout << example_queue.peek_front() << std::endl;

    example_queue.dequeue();
    example_queue.dequeue();

    std::cout << example_queue.peek_front() << std::endl;

    return 0;

}