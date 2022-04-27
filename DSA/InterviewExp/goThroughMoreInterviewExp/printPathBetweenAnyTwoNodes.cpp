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
    int target1,target2;
    cin>>target1>>target2;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<int> path1;
    vector<int> path2;

    pathFromRootToNode(root,target1,path1);
    pathFromRootToNode(root,target2,path2);

    int i=0,j=0,intersection = -1;
    while(i != path1.size() || j != path2.size())
    {
        if(i == j && path1[i] == path2[j]) 
        {
            i++;
            j++;
        }
        else 
        {
            intersection = j-1;
            break;
        }
    }


    for(int i=path1.size()-1;i>intersection;i--) 
    {
        cout<<path1[i]<<" ";
    }
    for(int j=intersection;j<path2.size();j++) 
    {
        cout<<path2[j]<<" ";
    }

    
}   