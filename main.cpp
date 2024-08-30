#include <iostream>
#include "src/linkedList.hpp"


int main() {

    LinkedList<int> *ll = new LinkedList<int>();

    ll->createNode(1);
    ll->createNode(2);
    ll->printList();

    return 0;

}