
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

int maxWidth(TreeNode *root)
{
    if(root == NULL) 
        return 0;
    queue<pair<TreeNode *,int>> q; //Push Node along with level value.
    q.push({root,0});
    int width = INT_MIN;
    
    while(!q.empty())
    {
        int size = q.size();
        int lmin = q.front().second; //Minimum val in that level.
        int first,last;
        for(int i=0;i<size;i++) 
        {
        
            auto p = q.front();
            q.pop();
            TreeNode *node = p.first;
            int curr = p.second-lmin; //To eliminate overflow. 
            if(i == 0) 
                first = curr; //Capture the first node Index of that level
            if(i == size-1)  
                last = curr; //Capture the last node Index of that level
            if(node->left != NULL) 
                q.push({node->left,2*curr+1});
            if(node->right != NULL) 
                q.push({node->right,2*curr+2});
        }
        width = max(width,last-first+1); //Capture maximum width.
    }
    return width;
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    cout<<maxWidth(root)<<endl;

}