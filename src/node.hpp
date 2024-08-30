#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
struct Node
{

    T data;
    struct Node *next;
};

#endif 