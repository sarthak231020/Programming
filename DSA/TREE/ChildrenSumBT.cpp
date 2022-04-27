#include<bits/stdc++.h> 
using namespace std; 

struct TreeNode
{
    int data;
    struct TreeNode *left; 
    struct TreeNode *right;

    TreeNode(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void ChildrenSumBt(TreeNode *root)
{
    if(root == NULL) 
        return;
    int child = 0;
    if(root->left) 
        child += root->left->data;
    if(root->right)
        child += root->right->data;
    if(child >= root->data)
        root->data = child;
    else 
    {
        if(root->left)
            root->left->data = root->data;
        if(root->right) 
            root->right->data = root->data;
    }
    ChildrenSumBt(root->left);
    ChildrenSumBt(root->right);
    int tot = 0;
    if(root->left) 
        tot += root->left->data;
    if(root->right)
        tot += root->right->data;
    if(root->left || root->right)
        root->data = tot;
}

void preOrder(TreeNode *root) 
{
    if(root == NULL) 
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() 
{
    TreeNode *root = new TreeNode(50);
    root->left = new TreeNode(7);
    root->right = new TreeNode(2); 
    // root->left->left = new TreeNode(4);
    // root->left->right = new TreeNode(10);
    // root->right->left = new TreeNode(9);
    // root->right->right = new TreeNode(10);
    // root->left->left->right = new TreeNode(5);
    // root->left->left->right->right = new TreeNode(6);

    preOrder(root);
    cout<<endl;
    ChildrenSumBt(root);
    preOrder(root);
}