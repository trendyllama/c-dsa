#include<iostream>
#include<unordered_set>

using std::cout;
using std::endl;
using std::unordered_set;

int main()
{
    unordered_set<int> hash_set;
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
        cout << i << " ";
    }
    cout << endl;

    hash_set.erase(5);
    hash_set.erase(6);
    hash_set.erase(7);

    for(auto i : hash_set)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;

}