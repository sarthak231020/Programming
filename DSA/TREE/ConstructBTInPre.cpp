
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

TreeNode *ContructBT(vector<int> inorder,int inStart,int inEnd,vector<int> preorder,int preStart,int preEnd,map<int,int> inMap)
{
    if(inStart>inEnd || preStart>preEnd) 
        return NULL;
    TreeNode *root = new TreeNode(preorder[preStart]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot-inStart;

    root->left = ContructBT(inorder,inStart,inRoot-1,preorder,preStart+1,preStart+numsLeft,inMap);
    root->right = ContructBT(inorder,inRoot+1,inEnd,preorder,preStart+numsLeft+1,preEnd,inMap);
    return root;
}
void in(TreeNode *root) 
{
    if(root == NULL) 
        return;
    
    in(root->left); 
    cout<<root->data<<" ";
    in(root->right);
}

void pre(TreeNode *root) 
{
    if(root == NULL) 
        return;
    
    cout<<root->data<<" ";
    pre(root->left); 
    pre(root->right);
}


int main() 
{
    int N;
    cin>>N;
    vector<int> inorder(N),preorder(N);
    for(int i=0;i<N;i++) 
    {
        cin>>inorder[i];
    }

    for(int i=0;i<N;i++) 
    {
        cin>>preorder[i];
    }

    map<int,int> mp;
    for(int i=0;i<N;i++) 
    {
        mp[inorder[i]] = i;
    }

    TreeNode *root = ContructBT(inorder,0,N-1,preorder,0,N-1,mp);

    in(root); 
    cout<<endl;
    pre(root);

}