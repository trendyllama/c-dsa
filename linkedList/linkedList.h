
template <typename T>
class LinkedList
{

public:

    void createNode(T value);
    void printList();
    void pushNode(T value);
    void insertAtPosition(int pos, T value);
    T pop();
    int rmLast();
    int rmByIndex(T n);
    
};
