#include<iostream>
#include<stack>
#include<vector>
#include <initializer_list>

using namespace std;

struct TreeNode{
    int val;
    struct TreeNode *left,*right;
};

struct TreeNode* newNode(int data)
{
    struct TreeNode* node = new struct TreeNode;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

vector<int>preInPost(TreeNode* root){
    stack<pair<TreeNode*,int> > st;
    vector<int>pre,in,post;
    st.push({root,1});
    if(root == NULL) return pre;
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(st.top().second == 1)
        {
            pre.push_back(st.top().first->val);
            st.top().second++;
            st.push(st.top());
            if(st.top().first->left != NULL){
                st.push({st.top().first->left,1});
            }
        }
        else if(st.top().second == 2){
            in.push_back(st.top().first->val);
            st.top().second++;
            st.push(st.top());
            if(st.top().first->right != NULL)
            {
                st.push(st.top().first->right,1);
            }
        }
        else{
            post.push_back(st.top().first->val);
        }

    }
    cout << "Preorder"<<endl;
    for(int i=0;i<pre.size();i++)
    {
        cout << pre[i] <<" ";
    }
    cout <<endl;
    cout << "Inorder"<<endl;
    for(int i=0;i<in.size();i++)
    {
        cout << in[i] <<" ";
    }
    cout <<endl;
    cout << "Postorder"<<endl;
    for(int i=0;i<post.size();i++)
    {
        cout << post[i] <<" ";
    }
    cout <<endl;
    return pre;

}

int main()
{
    struct TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    preInPost(root);

    return 0;
}