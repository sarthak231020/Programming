
int levelOrder(TreeNode *root)
{
    vector<vector<int>> ans;
    int count = 0;  
    queue<TreeNode *> q;
    q.push(root);
    count++;
    while(!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        level.push_back(node->data);
        if(node->left != NULL)  q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
    ans.push_back(level);
    count = ans.size();
}


struct Node 
{
    public:
    int data;
    int salary;
    char name[];
    Node *next;
}

