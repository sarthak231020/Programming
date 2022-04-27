
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


TreeNode *inOrderSucc(TreeNode *root,TreeNode *target) 
{
    TreeNode *Successor = NULL;
    while(root) 
    {
        if(target->data >= root->data) 
        {
            root = root->right;
        }
        else 
        {
            Successor = root; 
            root = root->left;
        }
    }
    return Successor;
}

TreeNode *inOrderPred(TreeNode *root,TreeNode *target) 
{
    TreeNode *Predecessor = NULL;
    while(root) 
    {
        if(target->data > root->data) 
        {
            Predecessor = root;
            root = root->right;
        }
        else 
        { 
            root = root->left;
        }
    }
    return Predecessor;
}


int main() 
{
    TreeNode *root = new TreeNode(5);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);

    root->right = new TreeNode(7);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    root->right->right->left = new TreeNode(8);
    root->right->right->right = new TreeNode(10);
    
    
    cout<<inOrderSucc(root,new TreeNode(8))->data<<endl;

    cout<<inOrderPred(root,new TreeNode(8))->data<<endl;
}