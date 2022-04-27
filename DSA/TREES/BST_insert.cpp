#include<bits/stdc++.h> 
using namespace std; 
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BST 
{
    public:
    Node *Insert(Node *root,int data)
    {
        if(root == NULL)
        {
            root = new Node(data);
            return root;
        }

        if(root->data < data)
        {
            root->right = Insert(root->right,data);
        }
        else 
        {
            root->left = Insert(root->left,data);
        }

        return root;
    }


    void Inorder(Node *root) 
    {
        if(root != NULL)
        {
            Inorder(root->left);
            cout<<root->data<<" ";
            Inorder(root->right);
        }
    }

    void levelOrder(Node *root,int count,vector<vector<int>> &levelans)
    {
        if(root == NULL) return;
        queue<Node *> q;
        q.push(root);
        while(!q.empty()) 
        {
            int size = q.size();
            vector<int> level; 
            for(int i=0;i<size;i++)
            {
                Node *node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->data);
            }
            levelans.push_back(level);
        }
    }   
};

int main() 
{
    Node *root = NULL;
    BST tree;
    root = tree.Insert(root,10);
    root = tree.Insert(root,5);
    root = tree.Insert(root,2);
    root = tree.Insert(root,8);
    root = tree.Insert(root,20);
    root = tree.Insert(root,15);
    root = tree.Insert(root,30);
    tree.Inorder(root);
    cout<<endl;
    vector<vector<int>> L;
    tree.levelOrder(root,7,L);
    for(auto it:L)
    {
        for(auto it1:it)
        {

            cout<<it1<<" ";
        }
        cout<<endl;
    }
}   