// Tree 
// There are two trees given. Find first tree leasf node is reverse of second tree leaf node or not . 
// if Yes count the different node


/* Example
Input:
    Tree 1          Tree 2
        1             1
       / \           /  \
      2   3         2    3

output : 2 
( tree1 leaf nodes  = 2,3 |  trre2 leaf nodes = 2,3 . both are identical not reverse)

input 
    Tree 1           Tree 2
       1                1
      /  \             /  \
     2    3           3    2

output : 0
 ( tree1 leaf nodes  = 2,3 |  trre2 leaf nodes = 3,2 . both are in reverse not identical)
*/
//#include<bits/stdc++.h>


#include<iostream>
#include<vector>
#include<queue>

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
    return ((!root->left) && (!root->right));
}


vector<int> leafNodes(TreeNode* root)
{
    vector<int> res;
    if(root == NULL)
        return res;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* it = q.front();
        q.pop();
        if(isLeaf(it))
            res.push_back(it->val);
        if(it->left)
            q.push(it->left);
        if(it->right)
            q.push(it->right);
    }
    return res;
}

int checkLeafSequence(TreeNode* root1, TreeNode* root2){
    vector<int> vec1;
    vector<int> vec2;
    vec1 = leafNodes(root1);
    vec2 = leafNodes(root2);
    int count = 0;
    for(int i=0;i<vec1.size();i++)
    {
        if(vec1[i] != vec2[vec2.size()-1-i])
            count++;
        
    }
    return count;
}


int main()
{
    struct TreeNode* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(7);
    root1->left->left = newNode(3);
    root1->right->right = newNode(8);
    root1->left->left->right = newNode(4);
    root1->right->right->left = newNode(9);
    root1->left->left->right->left = newNode(5);
    root1->left->left->right->right = newNode(6);
    root1->right->right->left->left =newNode(10);
    root1->right->right->left->right = newNode(11);
    
    struct TreeNode* root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(7);
    root2->left->left = newNode(3);
    root2->right->right = newNode(8);
    root2->left->left->right = newNode(4);
    root2->right->right->left = newNode(9);
    root2->left->left->right->left = newNode(11);
    root2->left->left->right->right = newNode(10);
    root2->right->right->left->left =newNode(6);
    root2->right->right->left->right = newNode(5);

    int ans = checkLeafSequence(root1, root2);
    cout << ans;
    cout <<endl;
    return 0;
}