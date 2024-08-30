#include <iostream>
#include "linkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

template <typename T>
void LinkedList<T>::createNode(T value)
{

    Node<T> *temp = new Node<T>(value, nullptr);

    if (head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
}

template <typename T>
void LinkedList<T>::printList()
{
    Node<T> *current = head;

    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

template <typename T>
void LinkedList<T>::pushNode(T value)
{
    Node<T> *new_node;
    new_node = new Node<T>(value, head);

    head = new_node;
}

template <typename T>
void LinkedList<T>::insertAtPosition(int pos, T value)
{
    Node<T> *pre = new Node<T>;
    Node<T> *current = new Node<T>;
    Node<T> *temp = new Node<T>;
    current = head;

    for (int i = 1; i < pos; i++)
    {
        pre = current;
        current = current->next;
    }
    temp->data = value;
    pre->next = temp;
    temp->next = current;
}

template <typename T>
T LinkedList<T>::pop()
{
    int retval = 0;
    Node<T> *next_node = nullptr;

    next_node = head->next;
    retval = head->data;
    delete head;
    head = next_node;

    return retval;
}

template <typename T>
int LinkedList<T>::rmLast()
{
    int retval = 0;
    // if there is only one item remove it
    if (head->next == nullptr)
    {
        retval = head->data;
        delete head;
        return retval;
    }

    Node<T> *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    // now current points to second to last item of the list
    retval = current->next->data;
    delete current->next;
    current->next = nullptr;
    return retval;
}

template <typename T>
int LinkedList<T>::rmByIndex(int n)
{
    int i = 0;
    int retval = -1;

    Node<T> *current;
    current = head;

    Node<T> *temp_node = nullptr;

    if (n == 0)
    {
        return pop();
    }

    for (i = 0; i < n - 1; i++)
    {
        if (current->next == nullptr)
        {
            return -1;
        }
        current = current->next;
    }

    temp_node = current->next;
    retval = temp_node->data;
    current->next = temp_node->next;
    delete temp_node;

    return retval;
}