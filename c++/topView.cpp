#include<iostream>
#include<vector>
#include<map>
#include<queue>

using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
};

struct Node* newNode(int val)
{
    struct Node* root = new struct Node;
    root->data = val;
    root->left = root->right = NULL;
    return root;
}

vector<int> topView(Node* root)
{
    vector<int> ans;
    if(root == NULL)
        return ans;
    map<int, int>mp;
    queue<pair<Node*, int>>q;
    q.push({root, 0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        Node* temp = it.first;
        int line = it.second;

        if(mp.find(line) == mp.end())
            mp[line] = temp->data;
        if(temp->left)
            q.push({temp->left, line-1});
        if(temp->right)
            q.push({temp->right, line+1});
    }
    for(auto i : mp)
        ans.push_back(i.second);
    return ans;
}
int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(7);
    root->left->right->left = newNode(6);

    vector<int>res = topView(root);
    for(auto i : res)
    {
        cout << i <<" ";
    }
    cout <<endl;
    return 0;
}