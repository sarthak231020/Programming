
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

TreeNode *LCA(TreeNode *root,TreeNode *node1,TreeNode *node2)
{
    if(root == NULL || root==node1 || root==node2) 
        return root;
    
    TreeNode *l = LCA(root->left,node1,node2);
    TreeNode *r = LCA(root->right,node1,node2);

    if(l == NULL) 
        return r; //we are unable to find left 
    else if(r == NULL)
        return l; //We are unable to find right
    else 
        return root; //We findboth of them
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3); 
    root->right->left = new TreeNode(4);
    root->right->left->left = new TreeNode(8);
    root->right->right = new TreeNode(5);
    root->right->right->left = new TreeNode(6);
    root->right->right->right = new TreeNode(7);
    
    cout<<LCA(root,root->right->left->left,root->right->right->right)->data<<endl;
    
}