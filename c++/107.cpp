// Leetcode
// 107. Binary Tree Level Order Traversal II

#include <iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

struct TreeNode *newNode(int data)
{
    struct TreeNode *root = new struct TreeNode;
    root->val = data;
    root->left = root->right = NULL;
    return (root);
}

class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode* root) {
        vector<vector<int> > tree;
        vector<vector<int> > dup;
        if(root == NULL) return tree;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int>temp;
            
            
            for(int i =0;i<size;i++){
                
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                temp.push_back(node->val);
            }
            
            dup.push_back(temp);
        }
        for(int i=dup.size()-1;i>=0;i--)
        {
            tree.push_back(dup[i]);
        }
        return tree;
        
    }
};

int main()
{
    struct TreeNode *root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);

    Solution obj;
    vector<vector<int> > result = obj.levelOrderBottom(root);
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout << result[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}
