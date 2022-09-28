// Geeksforgeeks
// Determine if Two Trees are Identical 
// recursion

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
    
    bool isIdentical(TreeNode *r1, TreeNode *r2)
    {
        
        if(r1  == NULL && r2 == NULL) return 1;
        if(r1 == NULL || r2 == NULL) return 0;
        if((r1->val == r2->val) && isIdentical(r1->left,r2->left) 
                && isIdentical(r1->right,r2->right))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    struct TreeNode *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(5);
    root1->left->left = newNode(3);
    root1->left->right = newNode(4);
    root1->right->left = newNode(6);
    root1->right->right = newNode(7);

    struct TreeNode *root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(5);
    root2->left->left = newNode(3);
    root2->left->right = newNode(4);
    root2->right->left = newNode(6);
    root2->right->right = newNode(7);

    Solution ob;
    if(ob.isIdentical(root1,root2)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }

    return 0;
}