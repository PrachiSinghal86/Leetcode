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
    void cnt(TreeNode *root,int mx,int &c)
    {
        if(root==NULL)
        {
            return ;
        }
        else if (root->val>=mx)
        {
            c=c+1;
            mx=root->val;
        }
         cnt(root->left,mx,c);
        cnt(root->right,mx,c);
    }
    int goodNodes(TreeNode* root) {
        int m=root->val;
        int c=1;
        cnt(root->left,m,c);
        cnt(root->right,m,c);
        return c;
        
    }
};