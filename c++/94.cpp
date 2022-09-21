// Binary Tree Inorder Traversal

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// struct node
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

// funtion
vector<int> inorderTraversal(TreeNode *root)
{
    // create stack
    stack<TreeNode *> st;
    
    // create a node and put root as a value
    TreeNode *node = root;

    // create vector
    vector<int> inorder;
    while (true)
    {
        if (node != NULL)
        {
            // push node in stack and set value left of node as a node
            st.push(node);
            node = node->left;
        }
        else
        {
            // check stack is empty or not
            if (st.empty() == true)
                break;

            // set top value of stack in node than pop from stack
            node = st.top();
            st.pop();

            // push value of node in vector than set right of node as a node
            inorder.push_back(node->val);
            node = node->right;
        }
    }

    // return vector
    return inorder;
}

int main()
{
    // create a tree and set value
    struct TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->left->right->right = newNode(7);

    // create a vector and store return value by calling function
    vector<int> inorder;
    inorder = inorderTraversal(root);

    // print vector
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }
    cout << endl;
    return 0;
}