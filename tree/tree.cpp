#include <iostream>
#include <vector>

struct TreeNode
{
    int data;
    std::vector<TreeNode> children;
};


class Tree
{

private:
    TreeNode *root;

public:

    Tree(int root_data){
        root = new TreeNode;
        root->data = root_data;

    }

    ~Tree() {

    }

};
