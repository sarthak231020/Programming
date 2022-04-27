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
//It takes TC->O(N) SC->O(N).

string Serialize(TreeNode *root) 
{
    if(root == NULL) 
        return "";
    string s;
    queue<TreeNode *> q; 
    q.push(root);
    while(!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        if(node != NULL) 
        {
            s.append(to_string(node->data)+",");
            q.push(node->left); 
            q.push(node->right);
        }
        else 
            s.append("#,");
    }
    return s;
}

TreeNode *DeSerialize(string data) 
{
    if(data.empty())    
        return NULL;
    string str;
    stringstream s(data);
    getline(s,str,',');
    TreeNode *root = new TreeNode(stoi(str));
    queue<TreeNode *> q;
    q.push(root); 
    while(!q.empty()) 
    {
        TreeNode *node = q.front();
        q.pop();
        getline(s,str,',');
        if(str == "#")
            node->left = NULL;
        else    
        {
            node->left = new TreeNode(stoi(str));
            q.push(node->left);
        }
        getline(s,str,',');
        if(str == "#") 
            node->right = NULL; 
        else 
        { 
            node->right = new TreeNode(stoi(str));
            q.push(node->right);
        }
    }
    return root;
}

vector<vector<int>> levelOrder(TreeNode *root) 
{
    vector<vector<int>> ans;
    if(root == NULL) 
        return ans; 
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()) 
    {
        int size = q.size();
        vector<int> level;
        
        for(int i=0;i<size;i++) 
        {
            TreeNode *node = q.front();
            q.pop();
            if(node->left != NULL) 
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}



int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(13); 
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    cout<<Serialize(root)<<endl;
    TreeNode *root1 = DeSerialize(Serialize(root));
    vector<vector<int>> ans = levelOrder(root1);
    for(auto i:ans) 
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}