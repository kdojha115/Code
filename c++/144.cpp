// Binary Tree Iterative Preorder Traversal 

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//Create node
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

vector<int> preorderTraversal(TreeNode *root)
{
    //create vector
    vector<int> preorder;
    //set base 
    if (root == NULL)
        return preorder;
    // create a stack and push root
    stack<TreeNode *> st;
    st.push(root);

    while (!st.empty())
    {
        // take top value of stack as a root and than pop from stack
        root = st.top();
        st.pop();
        // push val of root in vector
        preorder.push_back(root->val);
        // check right value of root if not null than push in stack
        if (root->right != NULL)
        {
            st.push(root->right);
        }
        // // check left value of root if not null than push in stack
        if (root->left != NULL)
        {
            st.push(root->left);
        }
    }
    // after complete loop return vector
    return preorder;
}

int main()
{
    // create a tree and set value
    struct TreeNode * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->right->left = newNode(5);
    root->left->right->right = newNode(6);
    
    //create vector and set value by call a function by passing root as a parameter  
    vector<int> preorder;
    preorder = preorderTraversal(root);

    // print vector
    for (int i = 0; i < preorder.size(); i++)
    {
        cout << preorder[i] << " ";
    }
    cout << endl;
    return 0;
}