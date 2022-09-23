// Binary Tree Postorder Traversal using single stack

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
    node->left = NULL;
    node->right = NULL;
    return (node);
}

vector<int> postorderTraversal(TreeNode *root)
{

    vector<int> postorder;

    stack<TreeNode *> st;
    while (true) {
        while (root) {
            st.push(root);
            st.push(root);
            root = root->left;
        }
        if (st.empty())
            return postorder;
        root = st.top();
        st.pop();
        if (!st.empty() && st.top() == root)
            root = root->right;
        else {
            postorder.push_back(root->val);
            root = NULL;
        }
    }
    

    return postorder;
}

int main()
{
    struct TreeNode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->left->right = newNode(7);
    root->right->left->right->right = newNode(8);

    vector<int> postorder;
    postorder = postorderTraversal(root);

    for (int i = 0; i < postorder.size(); i++)
    {
        cout << postorder[i] << " ";
    }
    cout << endl;

    return 0;
}