#include<bits/stdc++.h> 
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode()
    {

    }

    TreeNode(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


void levelOrder(TreeNode *root) 
{
    if(root == NULL)    
        return;

    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size(); 
        for(int i=0;i<size;i++) 
        {
            TreeNode *node = q.front();
            cout<<node->data<<" ";
            q.pop(); 
            if(node->left) 
                q.push(node->left);
            if(node->right) 
                q.push(node->right);
        }
    }

}



vector<vector<int>> levelOrder1(TreeNode *root) 
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
    int N;
    cin>>N;
    int ele;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<N;i++) 
    {
        cin>>ele;
        pq.push(ele);
    }
    
    TreeNode *root;
    while(pq.size() > 1) 
    {
        TreeNode *temp = new TreeNode();
        temp->left = new TreeNode(pq.top());
        pq.pop(); 
        temp->right = new TreeNode(pq.top());
        pq.pop();
        temp->data = temp->left->data + temp->right->data; 
        root = temp;
        pq.push(temp->data);
    }

    levelOrder(root);

    cout<<endl;

    vector<vector<int>> ans = levelOrder1(root);
    for(auto i:ans) 
    {
        for(auto j:i) 
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}