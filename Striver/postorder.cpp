#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
};

Node* newNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

void postorder(struct Node* root)
{
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<< root->data <<" ";
}

int main()
{
    struct Node* root= newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(8);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);

    postorder(root);
    cout <<endl;

    return 0;
}