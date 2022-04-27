
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

void RightSideView(TreeNode *root,int level,vector<int> &v)
{
    if(root == NULL)
        return;
    if(level == v.size())
        v.push_back(root->data);
    RightSideView(root->right,level+1,v);
    RightSideView(root->left,level+1,v);
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(7);
    root->left->right->left = new TreeNode(6);

    vector<int> v;
    RightSideView(root,0,v);

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}