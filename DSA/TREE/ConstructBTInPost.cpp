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


TreeNode *ConstructBT(vector<int> inorder,int inStart,int inEnd,vector<int> postorder,int postStart,int postEnd,map<int,int> inmap)
{
    if(inStart > inEnd || postStart >postEnd)
        return NULL;
    
    TreeNode *root = new TreeNode(postorder[postEnd]);
    int inRoot = inmap[root->data];
    int numsLeft = inRoot-inStart;

    root->left = ConstructBT(inorder,inStart,inRoot-1,postorder,postStart,postStart+numsLeft-1,inmap);
    root->right = ConstructBT(inorder,inRoot+1,inEnd,postorder,postStart+numsLeft,postEnd-1,inmap);

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

void post(TreeNode *root)
{
    if(root == NULL)    
        return;
    
    post(root->left);
    post(root->right);
    cout<<root->data<<" ";
}

int main() 
{
    int N;
    cin>>N; 
    vector<int> inorder(N),postorder(N);
    map<int,int> mp;

    for(int i=0;i<N;i++) 
    {
        cin>>inorder[i];
    }

    for(int i=0;i<N;i++) 
    {
        cin>>postorder[i];
    }

    for(int i=0;i<N;i++) 
    {
        mp[inorder[i]] = i;
    }
    
    TreeNode *root = ConstructBT(inorder,0,N-1,postorder,0,N-1,mp);

    in(root);
    cout<<endl;
    post(root);

}