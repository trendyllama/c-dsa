#include <iostream>
#include "src/linkedList.h"
#include "src/stack.h"
#include "src/queue.h"
#include "src/dynamic_array.h"

int main() {

    LinkedList<int> *ll = new LinkedList<int>();

    ll->createNode(1);
    ll->createNode(2);
    ll->printList();

    return 0;
    
}