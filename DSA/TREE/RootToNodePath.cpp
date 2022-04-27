
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

bool rootToNodePath(TreeNode *root,vector<int> &out,int Node)
{
    if(root == NULL) 
        return false;
    if(root->data == Node) 
    {   
        out.push_back(root->data);
        return true;
    }
    out.push_back(root->data);
    bool left = rootToNodePath(root->left,out,Node);
    if(left) 
        return true;
    else 
        out.pop_back();
    out.push_back(root->data);
    bool right = rootToNodePath(root->right,out,Node);
    if(right)
        return true;
    else 
        out.pop_back();
    return false;
}

//In a Simpler Way 
bool getPath(TreeNode *root,vector<int> &out,int x) 
{
    if(!root) 
        return false;
    
    out.push_back(root->data);
    if(root->data == x) 
        return true;
    if(getPath(root->left,out,x) || getPath(root->right,out,x))
    {
        return true;
    }
    out.pop_back();

    return false;
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

    vector<int> out;
    bool flag = rootToNodePath(root,out,6);

    if(flag)
    {
        for(auto i:out)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    out.clear();
    flag = getPath(root,out,6);
    if(flag) 
    {
        for(auto i:out) 
        {
            cout<<i<<" ";
        }
    }

}