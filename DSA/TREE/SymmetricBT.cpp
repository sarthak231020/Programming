
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

bool IsSymmetric(TreeNode *root1,TreeNode *root2) 
{
    if(root1 == NULL || root2 == NULL) 
        return (root1 == root2);
    if(root1->data != root2->data) 
        return false;
    return (IsSymmetric(root1->left,root2->right)&&IsSymmetric(root1->right,root2->left));
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    
    cout<<((root==NULL) || (IsSymmetric(root->left,root->right)))<<endl;
}