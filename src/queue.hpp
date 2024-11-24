#include "node.hpp"

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
    void peek_rear();
    void peek_front();
};

template <typename T>
Queue<T>::Queue()
{
    rear = nullptr;
    front = nullptr;
}

template <typename T>
Queue<T>::~Queue()
{
    while (!is_empty())
    {
        dequeue();
    }
}

template <typename T>
bool Queue<T>::is_empty()
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

template <typename T>
void Queue<T>::enqueue(T data)
{
    if (is_empty())
    {
        Node<T> *newNode = new Node<T>(data, nullptr);
        rear = newNode;
        front = newNode;
    }
    else
    {
        Node<T> *newNode = new Node<T>(data, nullptr);
        this->rear->next = newNode;
        this->rear = newNode;
    }
}

template <typename T>
void Queue<T>::dequeue()
{
    if (is_empty())
    {
        std::cout << "cannot dequeue when there's nothing in the queue" << std::endl;
        return;
    }

    Node<T> *temp = this->front;
    if (rear == front)
    {
        front = rear = nullptr;
    }
    else
    {
        front = front->next;
    }
    delete temp;
}

template <typename T>
void Queue<T>::peek_rear()
{
    if (is_empty())
    {
        std::cout << "queue is empty" << std::endl;
    }
    else
    {
        std::cout << rear->data << std::endl;
    }
}

template <typename T>
void Queue<T>::peek_front()
{
    if (is_empty())
    {
        std::cout << "queue is empty" << std::endl;
    }
    else
    {
        std::cout << front->data << std::endl;
    }
}