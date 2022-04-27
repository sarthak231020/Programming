#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    TreeNode *right,*left;
    TreeNode(int val) 
    {
        data = val; 
        right = left = NULL;
    }
};

TreeNode *markParents(map<TreeNode *,TreeNode *> &parents,TreeNode *root,int start)
{
    queue<TreeNode *> q;
    TreeNode *res; 
    q.push(root);
    while(!q.empty()) 
    {
        TreeNode *node = q.front();
        q.pop(); 
        if(node->data == start) 
            res = node; //The node address from which we start burning.
        if(node->left) 
        {
            parents[node->left] = node;
            q.push(node->left);
        }
        if(node->right)
        {
            parents[node->right] = node;
            q.push(node->right);
        }
    }
    return res;
}

int timeToBurn(map<TreeNode *,TreeNode *> parents,TreeNode *root,TreeNode *startNode,map<TreeNode *,int> visited) 
{
    queue<TreeNode *> q;
    q.push(startNode);
    visited[startNode] = 1;
    int ans = 0;
    while(!q.empty()) 
    {
        int sz = q.size();
        int anyNodeBurnt = 0;
        for(int i=0;i<sz;i++) 
        {   
            TreeNode *node = q.front();
            q.pop();
            if(node->left && !visited[node->left])
            {
                anyNodeBurnt = 1;
                q.push(node->left);
                visited[node->left] = 1;
            }
            if(node->right && !visited[node->right])
            {
                anyNodeBurnt = 1;
                q.push(node->right);
                visited[node->right] = 1;
            }
            if(parents[node] && !visited[parents[node]])
            {
                anyNodeBurnt = 1;
                q.push(parents[node]);
                visited[parents[node]] = 1;
            }
        }
        if(anyNodeBurnt) 
        {
            ans++;
        }
    }
    return ans;
}

int main() 
{
    int start;
    cin>>start;
    map<TreeNode *,TreeNode *> parents;
    map<TreeNode *,int> visited;
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4);
    root->left->left->right = new TreeNode(7);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);


    TreeNode *startNode;
    startNode = markParents(parents,root,start);
    cout<<"StartNode"<<" "<<startNode->data<<endl;
    for(auto i:parents)
    {
        cout<<i.first->data<<" -> "<<i.second->data<<endl;
    }
    cout<<timeToBurn(parents,root,startNode,visited);

}