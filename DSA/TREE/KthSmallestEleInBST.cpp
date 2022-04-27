
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

TreeNode *kthSmallestNode(TreeNode *root,int K,int &cnt) 
{
    if(root == NULL) 
        return root;
  

    TreeNode *left = kthSmallestNode(root->left,K,cnt);
    if(left != NULL) 
        return left;
    cnt++;
    if(cnt == K) 
    {
        return root;
    }
    TreeNode *right = kthSmallestNode(root->right,K,cnt);
    if(right != NULL) 
        return right;
    return NULL;
}

int main() 
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7); 
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);
    root->left->left->right = new TreeNode(2);


    // int cnt = 0;
    int cnt = 0;
    cout<<kthSmallestNode(root,6,cnt)->data<<endl;
}