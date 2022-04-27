
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

TreeNode *LCABST(TreeNode *root,TreeNode *p,TreeNode *q) 
{   // O(log2N) <- TC 
    // O(N) <- SC (Stack Space)
    if(root == NULL) 
        return NULL;
    
    if(root->data < p->data && root->data < q->data) 
        return LCABST(root->right,p,q); //If both are big than current node then move to right 
    if(root->data > p->data && root->data > q->data) 
        return LCABST(root->left,p,q); //If both are smaller than the current node then move to left 
    return root; // if both above case are not true that paths are divided into different directions 
                // So node where we stand is the intersection point the LCA - Longest common ancestor
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