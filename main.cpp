#include <iostream>
#include "src/linkedList.h"


int main() {

    LinkedList<int> *ll = new LinkedList<int>();

    ll->createNode(1);
    ll->createNode(2);
    ll->printList();

    return 0;
    
}