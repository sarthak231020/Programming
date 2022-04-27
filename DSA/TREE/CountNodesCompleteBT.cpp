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

int FindLeftHeight(TreeNode *root) 
{
    int cnt = 0;
    while(root) 
    {
        cnt++;
        root = root->left;
    }
    return cnt;
}

int FindRightHeight(TreeNode *root) 
{
    int cnt =0;
    while(root)
    {
        cnt++;
        root = root->right;
    }
    return cnt;
}


int CountNodes(TreeNode *root)
{ //TC-> O((logN)^2) SC->O(logN)
    if(root == NULL) 
        return 0; 
    int lh = FindLeftHeight(root);
    int rh = FindRightHeight(root); 
    
    if(lh == rh) 
        return (1<<lh)-1; //(2^lh)-1
    
    return 1+CountNodes(root->left)+CountNodes(root->right);
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(11);

    cout<<CountNodes(root)<<endl;
}