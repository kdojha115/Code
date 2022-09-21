//Level Order Traversal (BFS)

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// struct a node of name TreeNode

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

vector<vector<int> > levelOrder(TreeNode *root)
{
    // create a multidimensional vector

    vector<vector<int> > ans;

    // set base for return vector
    if (root == NULL)
        return ans;
    
    // create a queue and push root 
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            //create a node and store value of front of queue than pop
            TreeNode *node = q.front();
            q.pop();

            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    // create a tree
    struct TreeNode * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->right->left = newNode(5);
    root->left->right->right = newNode(6);

    // create a multi dimensinaol vector 
    vector<vector<int> > levelorder;

    // store vector value in levelorder by calling vector;
    levelorder = levelOrder(root);

    // print level order Traversal
    for (int i = 0; i < levelorder.size(); i++)
    {
        for(int j=0;j<levelorder[i].size();j++)
        {
            cout << levelorder[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}