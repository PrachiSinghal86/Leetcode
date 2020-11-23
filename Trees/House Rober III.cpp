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
    int p(TreeNode* root,map<TreeNode*,int>&dp)
    {
        
        if(root==NULL)
            return 0;
        if(dp.find(root)!=dp.end())
            return dp[root];
        int x=root->val;
        if(root->left!=NULL)
            x=x+p(root->left->left,dp)+p(root->left->right,dp);
        if(root->right!=NULL)
            x=x+p(root->right->left,dp)+p(root->right->right,dp);
        int y=p(root->left,dp)+p(root->right,dp);
        dp[root]=max(x,y);
        return max(x,y);
    }
    int rob(TreeNode* root) {
        int c=0;
        map<TreeNode* ,int>dp;
        c=p(root,dp);
        return c;
        
    }
};