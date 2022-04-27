
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

void TopView(TreeNode *root)
{
    if(root == NULL) 
        return;
    queue<pair<TreeNode *,int>> q; //first for tree node and second for vertical root will have 0,on left decrease by one, on right increase by one.
    map<int,int> mp;  //for storing data it will sort data on key like ...,-2,-1,0,1,2,...
    
    q.push({root,0});
    while(!q.empty()) 
    {
        auto p = q.front();
        q.pop();    
        TreeNode *node = p.first;
        int x = p.second;
        if(mp.find(x) == mp.end())
            mp[x] = node->data;
        if(node->left != NULL) 
        {
            q.push({node->left,x-1});
        }
        if(node->right != NULL) 
        {
            q.push({node->right,x+1});
        }
    }

    for(auto i:mp) 
    {
        cout<<i.second<<" ";
    }   
    cout<<endl;
    
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

    TopView(root);
}