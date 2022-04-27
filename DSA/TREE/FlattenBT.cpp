
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



TreeNode *previos = NULL; 
TreeNode *FlattenBT(TreeNode *root) 
{   //TC -> O(N) SC -> O(N).
    if(root == NULL) 
        return root;
    FlattenBT(root->right); 
    FlattenBT(root->left); 
    root->right = previos; 
    root->left = NULL;
    previos = root; 
    return root;
}

//Approach->2 Using a Stack
void FlattenBTStack(TreeNode *root) 
{   //TC -> O(N) 
    //SC -> O(N)
    if(root == NULL) 
        return;
    stack<TreeNode *> st;
    st.push(root); 
    while(!st.empty()) 
    {
        TreeNode *cur = st.top(); 
        st.pop(); 

        if(cur->right) 
            st.push(cur->right);
        
        if(cur->left) 
            st.push(cur->left);

        if(!st.empty())
            cur->right = st.top(); 
        cur->left = NULL;
    }
    
    // TraverseLL(root);
}

//Approach->3
void FlattenMorris(TreeNode *root) 
{   //TC -> O(N) SC-> O(1)
    if(root == NULL) 
        return;
    TreeNode *cur = root;
    while(cur != NULL) 
    {
        if(cur->left != NULL) 
        {
            TreeNode *prev = cur->left;
            while(prev->right)
            {
                prev = prev->right;
            }
            prev->right = cur->right;
            cur->right = cur->left;
        }
        cur = cur->right;
    }
}

void TraverseLL(TreeNode *root) 
{
    while(root)
    {
        cout<<root->data<<" ";
        root = root->right;
    }
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5); 
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);
    root->right->right->left = new TreeNode(7);

    // root = FlattenBT(root);
    
    // FlattenBTStack(root);
    
    FlattenMorris(root);
    TraverseLL(root);

}