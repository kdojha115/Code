#include<iostream>
#include<vector>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode* newNode(int data)
{
    struct TreeNode* root = new struct TreeNode;
    root->val = data;
    root->left = root->right = NULL;
    return root;    
}

bool isLeaf(TreeNode* root)
{
    return !root->left && !root->right;
}

void addLeftBoundary(TreeNode* root, vector<int> &res)
{
    TreeNode* cur = root->left;
    while(cur)
    {
        if(!isLeaf(cur))
            res.push_back(cur->val);
        if(cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void addLeaves(TreeNode* root, vector<int> &res){
    if(isLeaf(root))
        res.push_back(root->val);
    if(root->left)
        return addLeaves(root->left, res);
    else
        return addLeaves(root->right, res);
}

void addRightBoundary(TreeNode* root, vector<int> &res)
{
    TreeNode* cur = root->right;
    vector<int>right;
    while(cur)
    {
        if(!isLeaf(cur))
            right.push_back(cur->val);
        if(cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }
    for(int i=right.size()-1;i>=0;i--)
    {
        res.push_back(right[i]);
    }
}

vector<int> boundaryTraversal(TreeNode* root)
{
    vector<int> res;
    if(root == NULL)
        return res;
    res.push_back(root->val);
    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);
    return res;
}


int main()
{
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(3);
    root->right->right = newNode(8);
    root->left->left->right = newNode(4);
    root->right->right->left = newNode(9);
    root->left->left->right->left = newNode(5);
    root->left->left->right->right = newNode(6);
    root->right->right->left->left =newNode(10);
    root->right->right->left->right = newNode(11);

    vector<int> res = boundaryTraversal(root);
    for(int i=0;i<res.size();i++)
    {
        cout << res[i] <<" ";
    }
    cout <<endl;
    return 0;
}