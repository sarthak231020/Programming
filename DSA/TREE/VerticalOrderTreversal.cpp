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

void VerticalOrderTraverse(TreeNode *root) 
{
    if(root == NULL) 
        return;
    map<int,map<int,multiset<int>>> nodes; //First for vertical and second for level.
    queue<pair<TreeNode *,pair<int,int>>> q; //pair<int,int> first for vertical second for level.
    q.push({root,{0,0}});
    while(!q.empty()) 
    {
        auto p = q.front();
        q.pop();
        TreeNode *node = p.first;
        int x = p.second.first;
        int y = p.second.second;    
        nodes[x][y].insert(node->data); //x for vertical and y for level.

        if(node->left != NULL)  
            q.push({node->left,{x-1,y+1}});
        if(node->right != NULL) 
            q.push({node->right,{x+1,y+1}});
    }

    vector<vector<int>> ans;
    for(auto i:nodes) 
    {   
        vector<int> col;
        for(auto j:i.second) 
        {
            col.insert(col.end(),j.second.begin(),j.second.end());
        }
        ans.push_back(col);
    }

    for(auto i:ans) 
    {
        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
     

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

    VerticalOrderTraverse(root);
}