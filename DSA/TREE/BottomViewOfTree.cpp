
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

void BottomView(TreeNode *root) 
{
    if(root == NULL) 
        return;
    queue<pair<TreeNode *,int>> q;
    map<int,int> mp;
    q.push({root,0});
    while(!q.empty()) 
    {
        auto p = q.front();
        q.pop();
        TreeNode *node = p.first;
        int x = p.second;
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
    root->left->right->left = new TreeNode(8);
    root->left->right->right = new TreeNode(9);

    BottomView(root);

    
}