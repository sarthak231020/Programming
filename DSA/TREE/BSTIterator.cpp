
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
{   //Next takes O(1) amortized for single next call since suppose we have maded N calls and N elements got pushed in total so O(N/N)->O(1) amortized.
    //Space complexity O(height)
    //hasNext also is of O(1).
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

    

}