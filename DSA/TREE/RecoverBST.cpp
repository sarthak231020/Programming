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

TreeNode *prev1,*first,*middle,*last;

void inOrder(TreeNode *root) 
{
    if(root == NULL)    
        return;
    
    inOrder(root->left); 
    
    if(prev1 != NULL && (root->data < prev1->data))
    {
        //In Case it is the first violation 
        if(first == NULL) 
        {
            first = prev1;
            middle = root;
        }
        else
        {   //for second violation
            last = root;
        }
    }
    prev1 = root;

    inOrder(root->right);
}


void traverse(TreeNode *root) 
{
    if(root == NULL) 
        return;
    
    traverse(root->left); 
    cout<<root->data<<" ";
    traverse(root->right);
}

int main() 
{
    first = middle = last = NULL;
    prev1 = new TreeNode(INT_MIN);
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(12);
    root->right->left = new TreeNode(9);
    inOrder(root);
    traverse(root);
    cout<<endl;
    //If two violations are there then last will get updated.
    //So first we check for last one 
    // if single violation is there and it is adjacent then last will remain NULL.
    if(first && last) 
    {
        swap(first->data,last->data);
    }
    else if(first && middle)  
    {
        swap(first->data,middle->data);
    }

    traverse(root);

}