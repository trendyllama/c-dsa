#include<iostream>
#include<unordered_set>


int main()
{
    std::unordered_set<int> hash_set;
    hash_set.insert(1);
    hash_set.insert(2);
    hash_set.insert(3);
    hash_set.insert(4);
    hash_set.insert(5);
    hash_set.insert(6);
    hash_set.insert(7);
    hash_set.insert(8);
    hash_set.insert(9);
    hash_set.insert(10);

    for(auto i : hash_set)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    hash_set.erase(5);
    hash_set.erase(6);
    hash_set.erase(7);

    for(auto i : hash_set)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;

}