#include <iostream>
#include "src/linkedList.hpp"


int main() {

    auto *ll = new LinkedList<int>();

    ll->createNode(1);
    ll->createNode(2);
    ll->printList();

    return 0;

}