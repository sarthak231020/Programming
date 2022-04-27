#include<bits/stdc++.h> 
using namespace std; 

struct TreeNode 
{
    int data;
    TreeNode *left;
    TreeNode *right; 
    TreeNode(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
map<int,int> mp; // to store each sum frequency.
map<int,vector<int>> freq;

int postOrder(TreeNode *root) 
{
    
    if(root == NULL) 
        return 0;
    
    int left = postOrder(root->left);
    int right = postOrder(root->right);
    int sum = root->data+left+right;

    if(mp.find(sum) == mp.end())
    {
        mp[sum] = 1;
        freq[1].push_back(sum);
    }
    else 
    {
        mp[sum]++;
        freq[mp[sum]].push_back(sum);
    }
    return sum;
}


int main() 
{
    TreeNode *head = new TreeNode(4);
    head->left = new TreeNode(2); 
    head->right = new TreeNode(-4);

    postOrder(head); 

    for(auto i:freq) 
    {
        for(auto j:i.second) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}