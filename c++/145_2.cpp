// Binary Tree Postorder Traversal

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
    if (root == NULL)
    {
        return postorder;
    }

    stack<TreeNode *> st;
    st.push(root);
    while(!st.empty()){
        root= st.top();
        if(root->left != NULL){
            st.push(root->left);
        }
        else if(root->right != NULL){
            st.push(root->right);
        }
        else{
            postorder.push_back(root->val);
            st.pop();
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