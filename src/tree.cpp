#include <iostream>
#include <vector>

//same logic applies to any type
template <typename T>
class TreeNode
{

public:
    T data;
    std::vector<TreeNode> children;

    TreeNode(T init_data) {
        data = init_data;
        children = std::vector<TreeNode>()

    }
};


template <typename T>
class Tree
{

private:
    TreeNode<T> *root;

public:

    Tree(int root_data){
        root = new TreeNode<T>;
        root->data = root_data;

    }

    ~Tree() {

    }

};
