
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

class BSTIterator
{  
    public:
    stack<TreeNode *> st; 
    bool rev = true;  // reverse->true before()
                          // reverse->false next()
    bool hasNext() 
    {
        return !st.empty();
    }

    void BSTIterator1(TreeNode *root,bool isReverse)
    {
        rev = isReverse;
        pushAll(root,rev);
    }

    TreeNode *nextVal() 
    {
        TreeNode *node = st.top(); 
        st.pop();

        if(rev == false) 
            pushAll(node->right,rev);
        else 
            pushAll(node->left,rev);
        return node;
    }

    void pushAll(TreeNode *node,bool reverse) 
    {
        while(node) 
        {
            st.push(node);
            if(rev == true) 
                node = node->right;
            else 
                node = node->left;
        }
    }
};

int main() 
{
    int target;
    TreeNode *root = new TreeNode(8);
    root->left = new TreeNode(5);
    root->right = new TreeNode(10);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(12);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(7);

    BSTIterator NEXT,BEFORE;

    NEXT.BSTIterator1(root,false);
    BEFORE.BSTIterator1(root,true);

    int i=NEXT.nextVal()->data; 
    int j=BEFORE.nextVal()->data;
    target = 9;
    while(i<j) 
    {
        if(i+j == target) 
        {
            cout<<"Pair is : "<<i<<" "<<j<<endl;
            break;
        }
        else if(i+j < target)
            i = NEXT.nextVal()->data;
        else 
            j = BEFORE.nextVal()->data;
    }
    
}