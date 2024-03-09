#include <iostream>

template <typename T>
class Node {
    T data;
    Node *next;

    Node (T data, Node *next)
    {
        this.data = data;
        this.next = next;

    }
};

template <typename T>
class LinkedList
{
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void createNode(T value) {
        Node<T> *temp = new Node<T>(value, nullptr);

        if (head == nullptr) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = tail->next;
        }
    }

    void printList() {
        Node *current = head;

        while (current != nullptr) {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    void pushNode(T value) {
        Node<T> *new_node;
        new_node = new Node<T>;

        new_node->data = value;
        new_node->next = head;

        head = new_node;

    }

    void insertAtPosition(int pos, T value) {
        Node<T> *pre = new Node<T>;
        Node<T> *current = new Node<T>;
        Node<T> *temp = new Node<T>;
        current = head;

        for (int i = 1; i < pos; i++) {
            pre = current;
            current = current->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = current;
    }

    int pop() {
        int retval = 0;
        Node<T> *next_node = nullptr;

        next_node = head->next;
        retval = head->data;
        delete head;
        head = next_node;

        return retval;
    }

    int rmLast() {
        int retval = 0;
        //if there is only one item remove it
        if (head->next == nullptr) {
            retval = head->data;
            delete head;
            return retval;
        }

        Node<T> *current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        
        // now current points to second to last item of the list
        retval = current->next->data;
        delete current->next;
        current->next = nullptr;
        return retval;
        
    }

    int rmByIndex (int n) {
        int i = 0;
        int retval = -1;
        Node<T> *current = head;
        Node<T> *temp_node = nullptr;

        if (n == 0) {
            return pop();
        }

        for (i = 0; i < n-1; i++)
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


private:
    Node<T> *head;
    Node<T> *tail;
};

int main() {

    LinkedList<int> a;
    a.createNode(1);
    a.createNode(2);
    a.printList();


}