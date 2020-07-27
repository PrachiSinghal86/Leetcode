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
    bool p(TreeNode* root,int n)
    {
        if(root==NULL)
            return true;
        if(root->val!=n)
            return false;
        return p(root->left,n)&&p(root->right,n);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        
        return p(root,root->val);
    }
};