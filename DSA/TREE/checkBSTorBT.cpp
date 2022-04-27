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

bool checkBST(TreeNode *root,int minVal,int maxVal)
{
    if(root == NULL) 
        return true;
    
    if(root->data >= maxVal || root->data <= minVal) 
        return false;
    
    return checkBST(root->left,minVal,root->data)&&checkBST(root->right,root->data,maxVal);
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(10);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(10);
    root->left->left->right = new TreeNode(5);
    root->left->left->right->right = new TreeNode(6);

    cout<<checkBST(root,INT_MIN,INT_MAX)<<endl;

    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(5);
    root1->right = new TreeNode(15); 
    root1->left->left = new TreeNode(2);
    root1->left->right = new TreeNode(8);

    cout<<checkBST(root1,INT_MIN,INT_MAX)<<endl;    
}