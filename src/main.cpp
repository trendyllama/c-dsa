#include <iostream>
#include "linkedList.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include <numeric>
#include <vector>


void testLinkedList()
{
    auto iterRange = std::vector<int>(10);
    std::iota(iterRange.begin(), iterRange.end(), 1);

    auto *ll = new LinkedList<int>();

    for (auto &&i : iterRange)
    {
        ll->createNode(i);
    }

    ll->printList();
}


void testQueue()
{
    auto iterRange = std::vector<int>(10);
    std::iota(iterRange.begin(), iterRange.end(), 1);

    auto *queue = new Queue<int>();

    for (auto &&i : iterRange)
    {
        queue->enqueue(i);
    }

    queue->peek_front();
    queue->peek_rear();

    queue->dequeue();
    queue->dequeue();

    queue->peek_front();
    queue->peek_rear();
}


int main() {

    testLinkedList();


    testQueue();

    auto iterRange = std::vector<int>(10);
    std::iota(iterRange.begin(), iterRange.end(), 1);

    auto *stack = new Stack<int>();

    for (auto &&i : iterRange)
    {
        stack->push(i);
    }
    

    stack->peek();

    stack->pop();
    stack->pop();

    stack->peek();

    return 0;

}