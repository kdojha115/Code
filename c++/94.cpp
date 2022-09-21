// Binary Tree Inorder Traversal

#include <iostream>
#include <vector>
#include <stack>

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
    TreeNode *left = NULL;
    TreeNode *right = NULL;

    return (node);
}

vector<int> inorderTraversal(TreeNode *root)
{
    stack<TreeNode *> st;
    TreeNode *node = root;
    vector<int> inorder;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;
        }
    }
    return inorder;
}

int main()
{
    struct TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->left->right->right = newNode(7);

    vector<int> inorder;
    inorder = inorderTraversal(root);

    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }
    cout << endl;
}