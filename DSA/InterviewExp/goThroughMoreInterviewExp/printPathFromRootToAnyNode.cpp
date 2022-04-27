#include<bits/stdc++.h>
using namespace std;

struct TreeNode  
{
    int data;
    TreeNode *left,*right;
    TreeNode(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool pathFromRootToNode(TreeNode *root,int x,vector<int> &ans) 
{
    if(root == NULL) 
        return false;
    ans.push_back(root->data);
    if(root->data == x)     
        return true;
    if(pathFromRootToNode(root->left,x,ans) || pathFromRootToNode(root->right,x,ans))
        return true;
    ans.pop_back();
    return false;
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> ans;
    if(pathFromRootToNode(root,5,ans))
    {
        for(auto i:ans) 
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}   