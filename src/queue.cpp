#include <iostream>

struct Node
{

    int data;
    Node *next;
    Node *previous;

};

class Queue
{

private:

    Node *top;
    Node *bottom;
    int length;

public:

    Queue()
    {
        top = nullptr;
        bottom = nullptr;

        int length = 0;   
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
        if (top == nullptr && bottom == nullptr) {
            return true;
        } else {
            return false;
        }
    }
    
    void enqueue(int data)
    {
        if (is_empty()) {

           Node *newNode =  new Node;
           newNode->data = data;
           newNode->next = nullptr;
           
           top = newNode;
           bottom = newNode;

           length++;

        } else {

            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = top;
            
            //update tops previous value to our new node so
            //we can eventually dequeue the last node easily
            top->previous = newNode;

            //change the address at top to new node
            top = newNode;

            length++;

        }

    }

    void dequeue()
    {
        if (is_empty()) {

           std::cout << "cannot dequeue when there's nothing in the queue" << std::endl; 

        } else if (length == 1) {

            delete bottom;
            top = nullptr;
            length = 0;

        } else {

            Node *temp = bottom->previous;

            delete bottom;

            bottom = temp;
            bottom->next = nullptr;

            length--;
            
        }
        
    }

    int peek()
    {
        if (is_empty()) {
            std::cout << "queue is empty" << std::endl;

        } else {
            return top->data;
        }
    }

    int peek_bottom()
    {
        if (is_empty()) {
            std::cout << "queue is empty" << std::endl;

        } else {
            return bottom->data;
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

    std::cout << example_queue.peek_bottom() << std::endl;

    example_queue.dequeue();
    example_queue.dequeue();

    std::cout << example_queue.peek_bottom() << std::endl;

    return 0;

}