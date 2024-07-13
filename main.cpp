#include <iostream>
#include "linkedList/linkedList.h"
#include "dynamic-array/dynamic_array.h"

int main() {

    LinkedList<int> *ll = new LinkedList<int>();

    ll->createNode(1);
    ll->createNode(2);
    ll->printList();

    return 0;
    
}