#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode{
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

class Solution{
public:
    vector<vector<int> >zigZagBinaryTree(TreeNode* root)
    {
        vector<vector<int> > result;
        if(root == NULL) return result;

        queue<TreeNode*>nodes;
        nodes.push(root);
        bool leftToRight = true;

        while(!nodes.empty()){
            int size = nodes.size();
            vector<int>row(size);
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = nodes.front();
                nodes.pop();

                int index = (leftToRight) ? i : size - 1 - i;

                row[index] = node->val;
                if(node->left){
                    nodes.push(node->left);
                }
                if(node->right){
                    nodes.push(node->right);
                }
            }
            leftToRight = !(leftToRight);
            result.push_back(row);
        }
        return result;
    }
};
int main()
{
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);

    Solution obj; 

    vector<vector<int> > result = obj.zigZagBinaryTree(root);

    for(int i=0;i<result.size();i++){
        for(int j = 0;j<result[i].size();j++){
            cout << result[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}