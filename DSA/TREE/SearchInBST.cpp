
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

TreeNode *SearchBST(TreeNode *root,int target) 
{   //TC -> Log2N
    while(root !=NULL && root->data != target)
    {
        if(target < root->data)
        {
            root = root->left;
        }
        else 
        {
            root = root->right;
        }
    }   
    return root;
}


int FindCeil(TreeNode *root,int target)
{
    int ceil = -1;
    while(root) 
    {
        if(target == root->data) 
        {
            ceil = target;
            return ceil; 
        }
        if(target < root->data) 
        {
            ceil = root->data;
            root = root->left;
        }
        else 
            root = root->right;
    }
    return ceil;
}

int FindFloor(TreeNode *root,int target)
{
    int floor = -1;
    while(root) 
    {
        if(target == root->data) 
        {
            floor = target;
            return floor; 
        }
        if(target < root->data) 
        {
            root = root->left;
        }
        else 
        {
            floor = root->data;
            root = root->right;
        }
    }
    return floor;
}
int main() 
{
    int target; 
    cin>>target;
    //I haven't written Insert in BST code so I am just making a tree which follows the BST 
    // Ideally BST does not allows a duplicate & LST<ROOT<RST for every node.
    // but if we want then we can change rule to LST<=ROOT<RST
    TreeNode *root = new TreeNode(8);
    root->left = new TreeNode(6);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(7);
    root->right = new TreeNode(10); 
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(11);

    TreeNode *node = SearchBST(root,target);

    if(node == NULL) 
        cout<<"The Element Does not Exist"<<endl; 
    else 
        cout<<"The element is present"<<endl;

    cout<<"Ceil Value -> "<<FindCeil(root,target);
    

}