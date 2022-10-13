// Leetcode
// 222. Count Complete Tree Nodes

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode *newNode(int data)
{
    struct TreeNode *root = new struct TreeNode;
    root->val = data;
    root->left = root->right = NULL;
    return (root);
}

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main()
{
    struct TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(5);

    Solution obj;
    cout << obj.countNodes(root) << endl;
    return 0;
}
