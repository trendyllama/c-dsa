#include <iostream>
#include "linkedList.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include <numeric>
#include <vector>


void testLinkedList()
{
    std::cout << "Testing LinkedList" << std::endl;

    auto iterRange = std::vector<int>(10);
    std::iota(iterRange.begin(), iterRange.end(), 1);

    auto *ll = new LinkedList<int>();

    for (auto &&i : iterRange)
    {
        ll->createNode(i);
    }

    ll->printList();

    delete ll;

    std::cout << "End of LinkedList Test" << std::endl;
}


void testQueue()
{
    std::cout << "Testing Queue" << std::endl;

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

    delete queue;

    std::cout << "End of Queue Test" << std::endl;
}

void testStack()
{
    std::cout << "Testing Stack" << std::endl;

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

    delete stack;

    std::cout << "End of Stack Test" << std::endl;
}

int main() {

    testLinkedList();

    testQueue();

    testStack();

    return 0;

}