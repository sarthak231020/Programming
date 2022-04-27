#include<bits/stdc++.h> 
using namespace std; 

vector<int> visited(1000);

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
                                    //Node  //ParentNode
void getParent(TreeNode *root,unordered_map<TreeNode *,TreeNode *> &parent)
{
    if(root == NULL) 
        return;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()) 
    {
        TreeNode *node = q.front();
        q.pop();
        if(node->left) 
        {
            q.push(node->left);
            parent[node->left] = node;
        }
        if(node->right) 
        {
            q.push(node->right);
            parent[node->right] = node;
        }
    }
}

void NodesAtDistanceK(TreeNode *root,TreeNode *target,int K) 
{
    
    unordered_map<TreeNode *,TreeNode *> parent;
    getParent(root,parent);
    queue<TreeNode *> q;
    q.push(target); 
    visited[target->data] = 1;
    int curr = 0;
    while(!q.empty()) 
    {
        int size = q.size();
        if(curr == K)
            break;
        curr++;
        for(int i=0;i<size;i++) 
        {
            TreeNode *node = q.front();
            q.pop();
            if(node->left && !visited[node->left->data])
            {
                q.push(node->left);
                visited[node->left->data] = 1;
            }
            if(node->right && !visited[node->right->data])
            {
                q.push(node->right);
                visited[node->right->data] = 1;
            }
            if(parent[node] && !visited[parent[node]->data])
            {
                q.push(parent[node]);
                visited[parent[node]->data] = 1;
            }
        }
    }
    while(!q.empty()) 
    {
        cout<<q.front()->data<<" ";
        q.pop();
    }
}

int main() 
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1); 
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    for(int i=0;i<1000;i++) 
        visited[i] = 0;
    
    NodesAtDistanceK(root,root->left,2);

}