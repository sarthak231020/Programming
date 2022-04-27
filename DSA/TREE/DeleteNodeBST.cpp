
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

// TC -> O(height of tree)
TreeNode *findLastRight(TreeNode *root) 
{
    while(root->right != NULL) 
    {
        root = root->right;
    }
    return root;
}

TreeNode *attachLinks(TreeNode *root) 
{
    if(root->left == NULL) 
        return root->right;
    if(root->right == NULL)     
        return root->left;

    TreeNode *rightChild = root->right;
    TreeNode *lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}

TreeNode *deleteNode(TreeNode *root,int key) 
{
    if(root == NULL) 
        return NULL;
    
    if(root->data == key) 
    {
        return attachLinks(root);
    }

    TreeNode *cur = root;
    while(cur) 
    {
        if(cur->data > key)  // In this case move left
        {
            if(cur->left != NULL && cur->left->data == key)
            {   
                cur->left = attachLinks(cur->left);
                break;
            }
            else 
            {
                cur = cur->left;
            }
        }
        else 
        {
            if(cur->right != NULL && cur->right->data == key)
            {   
                cur->right = attachLinks(cur->right);
                break;
            }
            else 
            {
                cur = cur->right;
            }
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