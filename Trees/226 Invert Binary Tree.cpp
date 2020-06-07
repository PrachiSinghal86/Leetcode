/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void p(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        TreeNode* n=root->left;
        root->left=root->right;
        root->right=n;
        p(root->left);
        p(root->right);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        p(root);
        return root;
    }
};