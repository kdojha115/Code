// GeeksforGeeks
// Height of Binary Tree

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

class Solution{
    public:
    
    int height(struct TreeNode* node){
        
        if(node == NULL) return 0;
        int h = max( height(node->left), height(node->right)) +1;
        return h;
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
    cout << ob.height(root) <<endl;
    

    return 0;
}