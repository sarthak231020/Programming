
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

TreeNode *insertNode(TreeNode *root,int data) 
{
    TreeNode *newNode = new TreeNode(data);
    if(root == NULL) 
    {
        root = newNode;
        return root;
    }

    TreeNode *cur = root;
    TreeNode *temp = NULL;
    while(cur)
    {
        if(data < cur->data) 
        {
            temp = cur;
            cur = cur->left;
        }
        else 
        {
            temp = cur; 
            cur = cur->right;
        }
    }
    if(data < temp->data) 
        temp->left = newNode;
    else 
        temp->right = newNode;
}

//Can Also Be written as 
TreeNode *insertBST2(TreeNode *root,int data) 
{   //TC -> O(log2N)
    TreeNode *newNode = new TreeNode(data);
    if(root == NULL) 
        return newNode;
    TreeNode *cur = root;
    while(true) 
    {
        if(cur->data <= data) 
        {
            if(cur->right == NULL)
            {
                cur->right = newNode;
                break;
            }
            else 
                cur = cur->right;
        }
        else 
        {
            if(cur->left == NULL) 
            {
                cur->left = newNode;
                break;
            }
            else 
                cur = cur->left;
        }
    }
    return root;
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

    
}