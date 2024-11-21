// node.hpp
#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(T value, Node* nextNode = nullptr) : data(value), next(nextNode) {}
};

#endif // NODE_HPP