#include <iostream>

struct Node {
    int data;
    struct Node * next;
};

class LinkedList
{
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void createNode(int value) {
        Node *temp = new Node;
        temp->data = value;
        temp->next=nullptr;

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

    void pushNode(int value) {
        Node *new_node;
        new_node = new Node;

        new_node->data = value;
        new_node->next = head;

        head = new_node;

    }

    void insertAtPosition(int pos, int value) {
        Node *pre = new Node;
        Node *current = new Node;
        Node *temp = new Node;
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
        Node *next_node = nullptr;

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

        Node *current = head;
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
        Node *current = head;
        Node *temp_node = nullptr;

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
    Node *head;
    Node *tail;
};

int main() {

    LinkedList a;
    a.createNode(1);
    a.createNode(2);
    a.printList();


}