
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
//Approach - 1 Brute Force TC -> O(N^2) SC->O(N) for tree Creation.
//Create Insert Function for BST and call that function with every data given in preorder.

//Approach - 2 TC -> O(NlogN)+O(N). SC->O(N)
//Sort the pre order to another array that will represent the INOrder for BST (Since it is BST In order is always be sorted)

//Approach - 3 
TreeNode *buildBst(vector<int> preorder,int &i,int bound) 
{
    if(i == preorder.size() || preorder[i] > bound) 
        return NULL;
    
    TreeNode *root = new TreeNode(preorder[i++]);
    root->left = buildBst(preorder,i,root->data);
    root->right = buildBst(preorder,i,bound);
    return root;  
}

void levelOrder(TreeNode *root)
{
    if(root == NULL) 
        return; 
    queue<TreeNode *> q; 
    q.push(root); 
    vector<vector<int>> ans; 
    while(!q.empty()) 
    {
        int size = q.size(); 
        vector<int> level;
        for(int i=0;i<size;i++) 
        {
            TreeNode *node = q.front(); 
            q.pop(); 
            level.push_back(node->data);
            if(node->left)
                q.push(node->left); 
            if(node->right) 
                q.push(node->right);
        }
        ans.push_back(level);
    }

    for(auto i:ans){

        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() 
{
    int N;
    cin>>N;
    vector<int> preorder(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>preorder[i];
    }

    int i=0;
    TreeNode *root = buildBst(preorder,i,INT_MAX); 

    levelOrder(root);
}