#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left,*right;
    TreeNode(int val) 
    {
        data = val; 
        left = right = NULL;
    }
};

bool solve(TreeNode *root,int leaf,int level)
{
    if(root == NULL) 
    {
        return true;
    }
    if(root->left == NULL && root->right == NULL) 
    {
        if(leaf == level) 
            return true;
        return false;
    }

    if(solve(root->left,leaf,level+1) == false)
        return false;
    if(solve(root->right,leaf,level+1) == false) 
        return false;
    return true;

    // in simple way return solve(root->left,leaf,level+1) && solve(root->right,leaf,level+1)
}
int main() 
{   
    TreeNode *root = new TreeNode(12); 
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(9);
    root->left->left->left = new TreeNode(1);
    root->left->right->left = new TreeNode(1);

    int leafLevel = -1;
    TreeNode *curr = root; 
    while(curr) 
    {
        leafLevel++;
        curr = curr->left;
    }

    cout<<solve(root,leafLevel,0);

}

//GFG Solution
// C++ program to check if all leaves
// are at same level
// #include <bits/stdc++.h>
// using namespace std;

// // A binary tree node
// struct Node
// {
// 	int data;
// 	struct Node *left, *right;
// };

// // A utility function to allocate
// // a new tree node
// struct Node* newNode(int data)
// {
// 	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
// 	node->data = data;
// 	node->left = node->right = NULL;
// 	return node;
// }

// /* Recursive function which checks whether
// all leaves are at same level */
// bool checkUtil(struct Node *root,
// 			int level, int *leafLevel)
// {
// 	// Base case
// 	if (root == NULL) return true;

// 	// If a leaf node is encountered
// 	if (root->left == NULL &&
// 		root->right == NULL)
// 	{
// 		// When a leaf node is found
// 		// first time
// 		if (*leafLevel == 0)
// 		{
// 			*leafLevel = level; // Set first found leaf's level
// 			return true;
// 		}

// 		// If this is not first leaf node, compare
// 		// its level with first leaf's level
// 		return (level == *leafLevel);
// 	}

// 	// If this node is not leaf, recursively
// 	// check left and right subtrees
// 	return checkUtil(root->left, level + 1, leafLevel) &&
// 			checkUtil(root->right, level + 1, leafLevel);
// }

// /* The main function to check
// if all leafs are at same level.
// It mainly uses checkUtil() */
// bool check(struct Node *root)
// {
// 	int level = 0, leafLevel = 0;
// 	return checkUtil(root, level, &leafLevel);
// }

// // Driver Code
// int main()
// {
// 	// Let us create tree shown in third example
// 	struct Node *root = newNode(12);
// 	root->left = newNode(5);
// 	root->left->left = newNode(3);
// 	root->left->right = newNode(9);
// 	root->left->left->left = newNode(1);
// 	root->left->right->left = newNode(1);
// 	if (check(root))
// 		cout << "Leaves are at same level\n";
// 	else
// 		cout << "Leaves are not at same level\n";
// 	getchar();
// 	return 0;
// }

// // This code is contributed
// // by Akanksha Rai
