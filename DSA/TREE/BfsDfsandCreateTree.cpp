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



void preOrder(TreeNode *root) 
{
    if(root == NULL) 
        return;
    cout<<root->data<<" ";
    preOrder(root->left); 
    preOrder(root->right);
}

void inOrder(TreeNode *root) 
{
    if(root == NULL)
        return;
    inOrder(root->left); 
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(TreeNode *root)
{
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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

void preOrderItr(TreeNode *root) 
{
    if(root == NULL) 
        return;
    stack<TreeNode *> st;
    st.push(root);
    while(!st.empty()) 
    {   
        TreeNode *node = st.top();
        cout<<st.top()->data<<" ";
        st.pop();
        if(node->right != NULL) 
            st.push(node->right);
        if(node->left != NULL) 
            st.push(node->left);
    }

}

void inOrderItr(TreeNode *root)
{
    stack<TreeNode *> st;
    TreeNode *node = root;
    while(true) 
    {
        if(node != NULL) 
        {
            st.push(node);
            node = node->left;
        }
        else 
        {
            if(st.empty() == true) break;
            node = st.top();
            cout<<st.top()->data<<" ";
            st.pop();
            node = node->right;
        }
    }

}

void postOrderItr2St(TreeNode *root) 
{
    stack<TreeNode *> st1;
    stack<TreeNode *> st2;
    if(root == NULL) 
        return;
    st1.push(root);
    while(!st1.empty()) 
    {
        TreeNode *node = st1.top(); 
        st1.pop();
        st2.push(node);
        if(node->left != NULL) 
            st1.push(node->left);
        if(node->right != NULL)
            st1.push(node->right);
    }

    while(!st2.empty()) 
    {
        cout<<st2.top()->data<<" "; 
        st2.pop();
    }
}

void postOrderItr1St(TreeNode *root) 
{   
    stack<TreeNode *> st;
    if(root == NULL) 
        return; 
    TreeNode *curr = root;
    while(curr != NULL || !st.empty())
    {
        if(curr != NULL) 
        {
            st.push(curr);
            curr = curr->left;
        }
        else 
        {
            TreeNode *temp = st.top()->right;
            if(temp == NULL)
            {
                temp = st.top();
                st.pop();
                cout<<temp->data<<" ";
                while(!st.empty() && temp == st.top()->right) 
                {
                    temp = st.top();
                    st.pop();
                    cout<<temp->data<<" ";
                }
            }
            else 
            {
                curr = temp;
            }
        }
    }

}

void preInPost(TreeNode *root) 
{
    if(root == NULL) 
        return;

    vector<int> pre,in,post;
    stack<pair<TreeNode *,int>> st;
    st.push({root,1});
    while(!st.empty())
    {
        if(st.top().second == 1) 
        {
            pre.push_back(st.top().first->data);
            auto it = st.top();
            st.pop();
            it.second++;
            st.push(it);
            if(st.top().first->left != NULL) 
                st.push({st.top().first->left,1});
        }
        else if(st.top().second == 2) 
        {
            in.push_back(st.top().first->data);
            auto it = st.top();
            st.pop();
            it.second++;
            st.push(it);
            if(st.top().first->right != NULL) 
                st.push({st.top().first->right,1});
        }
        else if(st.top().second == 3) 
        {
            post.push_back(st.top().first->data);
            st.pop();
        }
    }


    for(auto i:pre) 
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    for(auto i:in) 
    {
        cout<<i<<" ";
    }
    cout<<endl; 
    
    for(auto i:post) 
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int maxDepth(TreeNode *root)
{   //TC -> O(N) //SC -> O(N) {in case of Skewed Trees}
    if(root == NULL) 
        return 0;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}


int balancedBT(TreeNode *root)  //if it is returning the height of tree then balanced otherwise imbalanced.
{ //TC -> O(N) //SC -> O(N) {in case of Skewed Trees}
    if(root == NULL) 
        return 0;
    int lh = maxDepth(root->left);
    if(lh == -1)
        return -1;
    int rh = maxDepth(root->right);
    if(rh == -1) 
        return -1;
    if(abs(lh-rh) > 1) 
        return -1;
    return 1+max(lh,rh);
}

int diameterTree(TreeNode *root,int &maxi)  // maximum of lh+rh is termed as diameter.
//Diameter 1.longest path between two nodes 
// 2. it may pass or not pass to any nodes (No Restrictions)
{
    if(root == NULL) 
        return 0;
    int lh = diameterTree(root->left,maxi);
    int rh = diameterTree(root->right,maxi);
    maxi = max(maxi,lh+rh);
    return 1+max(lh,rh);
}

int maxPathSum(TreeNode *root,int &maxi) 
{
    if(root == NULL) 
        return 0;
    int lh = max(0,maxPathSum(root->left,maxi)); // for ignoring the negative value paths
    int rh = max(0,maxPathSum(root->right,maxi)); //for ignoring the negative value paths
    maxi = max(maxi,lh+rh+(root->data));
    return (root->data)+max(lh,rh);   
}

bool isSameTree(TreeNode *p,TreeNode *q) 
{
    if(p == NULL || q == NULL) 
        return (p==q);
    return ((p->data == q->data) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}

void ZigZagTraversal(TreeNode *root)
{ //TC->O(N) SC->O(N).
    if(root == NULL) 
        return;
    queue<TreeNode *> q;
    q.push(root);
    bool flag = false; //if flag is false then lefttoright otherwise righttoleft.
    vector<vector<int>> ans;
    while(!q.empty()) 
    {
        int size = q.size();
        vector<int> level(size);
        for(int i=0;i<size;i++) 
        {
            TreeNode *node = q.front();
            if(flag == false)  
                level[i] = node->data;
            else 
                level[size-1-i] = node->data;
            q.pop();
            if(node->left != NULL)  
                q.push(node->left);
            if(node->right != NULL) 
                q.push(node->right);
        }  
        
        flag = !flag;
        ans.push_back(level);
    }
    for(int i=0;i<ans.size();i++) 
    {
        for(int j=0;j<ans[i].size();j++) 
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*Start of Boundary Traversal Code */
bool isLeaf(TreeNode *root) 
{
    if(root->left == NULL && root->right == NULL) 
        return true;
    return false;
}

void addLeftNode(TreeNode *root,vector<int> &res) 
{
    TreeNode *curr = root->left;
    while(curr) 
    {
        if(!isLeaf(curr))
            res.push_back(curr->data);
        if(curr->left)
            curr = curr->left;
        else 
            curr = curr->right; 
    }

}

void addRight(TreeNode *root,vector<int> &res)
{
    TreeNode *curr = root->right; 
    vector<int> temp;

    while(curr) 
    {
        if(!isLeaf(curr)) 
            temp.push_back(curr->data);
        if(curr->right)
            curr = curr->right;
        else 
            curr = curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--)
    {
        res.push_back(temp[i]);
    }
}



void BoundPutLeafNodes(TreeNode *root,vector<int> &v)
{
    if(isLeaf(root))
    {
        v.push_back(root->data);
        return;
    }
    if(root->left) BoundPutLeafNodes(root->left,v);
    if(root->right) BoundPutLeafNodes(root->right,v);
    
}
void BoundaryTraversal(TreeNode *root,vector<int> &res)
{
    if(root == NULL)
        return;
    if(!isLeaf(root))
        res.push_back(root->data);
    addLeftNode(root,res); 
    BoundPutLeafNodes(root,res);
    addRight(root,res);

    for(auto i:res)
        cout<<i<<" ";
    cout<<endl;
    // if(root == NULL) 
    //     return;
    // vector<TreeNode *> v;
    // stack<TreeNode *> st;
    // TreeNode *node = root;
    // while(isLeaf(node) == false) 
    // {
    //     if(node != NULL) 
    //     {
    //         v.push_back(node);
    //         node = node->left;
    //     }
    //     else 
    //     {
    //         node = v[v.size()-1];
    //         node = node->right;
    //     }
    // }

    // BoundPutLeafNodes(root,v);

    
    // node = root->right;
    // if(node != NULL) 
    // {
    //     while(isLeaf(node) == false) 
    //     {
    //         if(node != NULL) 
    //         {
    //             st.push(node);
    //             node = node->right;
    //         }
    //         else 
    //         {
    //             node = st.top()->left;
    //         }
    //     }
    // }
    // while(!st.empty())  
    // {
    //     v.push_back(st.top());
    //     st.pop();
    // }

    // for(auto i:v) 
    // {
    //     cout<<i->data<<" ";
    // }
    // cout<<endl;

}
/*End of Boundary Traversal Code */


int main() 
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    vector<vector<int>> ans = levelOrder(root);
    for(int i=0;i<ans.size();i++) 
    {
        for(int j=0;j<ans[i].size();j++) 
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    preOrderItr(root);
    cout<<endl;
    inOrderItr(root);
    cout<<endl; 
    postOrderItr2St(root);
    cout<<endl;
    postOrderItr1St(root);
    cout<<endl<<" IN A Single Go"<<endl;
    preInPost(root);
    cout<<endl;
    cout<<"Maximum Depth : "<<maxDepth(root)<<endl;

    cout<<"Are Trees Same:"<<isSameTree(root,root)<<endl;

    ZigZagTraversal(root);
    cout<<endl;
    vector<int> res;
    BoundaryTraversal(root,res);
}