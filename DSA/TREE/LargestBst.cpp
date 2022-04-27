#include<bits/stdc++.h> 
using namespace std;

class NodeValue 
{
    public:
    int maxVal,minVal,maxSize;
    NodeValue(int minVal,int maxVal,int maxSize)
    {
        this->minVal = minVal;
        this->maxVal = maxVal;
        this->maxSize = maxSize;
    }
};

class TreeNode 
{
    public:
    int data;
    TreeNode *left,*right;
    TreeNode(int val) 
    {
        data = val; 
        left = right = NULL;
    }
};

NodeValue solve(TreeNode *root) 
{
    if(!root) 
        return NodeValue(INT_MIN,INT_MAX,0);
    
    NodeValue left = solve(root->left);
    NodeValue right = solve(root->right);

    if(left.maxVal < root->data && root->data< right.minVal) //It is Satisfying BST conditions.
        return NodeValue(min(root->data,left.minVal),max(root->data,right.maxVal),1+left.maxSize+right.maxSize);
    
    return NodeValue(INT_MAX,INT_MIN,max(left.maxSize,right.maxSize));
    
}
int main() 
{
    TreeNode *root = new TreeNode(20);
    root->left = new TreeNode(15);
    root->left->left = new TreeNode(14);
    root->left->right = new TreeNode(18);
    root->left->right->right = new TreeNode(19);
    root->left->left->right = new TreeNode(17);
    root->left->right->left = new TreeNode(16);
    root->right = new TreeNode(40);
    root->right->left = new TreeNode(30);
    root->right->right = new TreeNode(60);
    root->right->right->left = new TreeNode(50);

    cout<<solve(root).maxSize<<endl;

}