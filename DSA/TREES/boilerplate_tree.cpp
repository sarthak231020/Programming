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

class Tree
{
    public:
    Node *add_node(int val)
    {
        Node *newnode  = new Node(val);
        cout<<"Node Created Successfully data:"<<newnode->data<<endl;
        return newnode;
    }   

    //DFS has three traversals in tree IN,PRE,POST.......
    void preOrder(Node *root,vector<int> &ans)
    {
        if(root == NULL)
            return;
        // cout<<"Running A"<<endl; 
        ans.push_back(root->data);
        preOrder(root->left,ans);
        // cout<<"Running B"<<endl;
        preOrder(root->right,ans);
        // cout<<"Running C"<<endl;
    }   

    void postOrder(Node *root,vector<int> &ans)
    {
        if(root == NULL)
            return;
        postOrder(root->left,ans);
        postOrder(root->right,ans);
        ans.push_back(root->data);
    }

    void inOrder(Node *root,vector<int> &ans) 
    {
        if(root == NULL)
            return;
        inOrder(root->left,ans);
        ans.push_back(root->data);
        inOrder(root->right,ans);
    }
    //BFS
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

    Node *InsertNode(Node *root,int data)
    {
        if(root == NULL)
        {
            return root;
        }
        queue<Node *> q;
        q.push(root);
        while(!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left != NULL)
            {
                q.push(temp->left);
            }
            else
            {
                temp->left = add_node(data);
                return root;
            }

            if(temp->right != NULL)
            {
                q.push(temp->right);
            }
            else
            {
                temp->right = add_node(data);
                return root;
            }
        }
    }
};

int main() 
    {
        Tree obj;
        Node *root;
        // root = obj.add_node(1);
        // root->left = obj.add_node(2);
        // root->right = obj.add_node(3);

        // cout<<root->data<<endl;
        // cout<<root->right->data<<endl;
        // cout<<root->left->data<<endl;
        
        // root->left->left = obj.add_node(4);
        // root->left->right = obj.add_node(5);
        // root->right->left = obj.add_node(6);
        // root->right->right = obj.add_node(7);

        // obj.preOrder(root);

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int key;
            cin>>key;
            obj.InsertNode(root,key);
        }
        vector<int> ans;
        obj.inOrder(root,ans);

        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

        ans.clear();

        obj.preOrder(root,ans);

        
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

        ans.clear(); 

        obj.postOrder(root,ans);
        
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

        ans.clear(); 

        obj.levelOrder(root,N);
        
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;

        ans.clear(); 

        vector<vector<int>> levelans;

        obj.levelOrder(root,N,levelans);

        for(int i=0;i<levelans.size();i++)
        {
            for(auto it:levelans[i])
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}