
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

vector<int> MorrisPre(TreeNode *root) 
{ // Amortized TC -> O(N) 
    // SC-> O(1)
    vector<int> ans;
    if(root == NULL) 
        return ans;
    TreeNode *cur = root; 
    while(cur != NULL) 
    {
        if(cur->left == NULL) 
        {
            ans.push_back(cur->data);
            cur = cur->right;
        }
        else
        {
            TreeNode *prev = cur->left;
                  //is not null  //no thread to root is present
            while(prev->right && prev->right != cur)
            {
                prev = prev->right;
            }

            if(prev->right == NULL) //Now we reached to the rightmost node of left subtree of cur
            {   // And this is not have any thread to root so create a thread toward the root(that is cur).
                prev->right = cur;
                ans.push_back(cur->data);
                cur = cur->left;
            }
            else 
            {   //This means we have already marked it as thread previously so put the null to unmark it since we have processed it 
                //and shift to right subtree of root
                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
    return ans;
}

int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5);
    root->left->right->right = new TreeNode(6);

    vector<int> ans = MorrisPre(root);
    
    for(auto i : ans) 
    {
        cout<<i<<" ";
    }

}