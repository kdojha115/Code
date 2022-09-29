// Geeksforgeeks
// Balanced Binary Tree

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode *newNode(int data)
{
    struct TreeNode *node = new struct TreeNode;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = dfsHeight(root->left);
        if (leftHeight == -1)
            return -1;
        int rightHeight = dfsHeight(root->right);
        if (rightHeight == -1)
            return -1;

        if (abs(leftHeight - rightHeight) > 1)
            return -1;

        return max(leftHeight, rightHeight) + 1;
    }
};

int main()
{
    struct TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    Solution ob;

    bool ans = ob.isBalanced(root);

    if (ans == true)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}