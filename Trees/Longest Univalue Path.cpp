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
    int p(TreeNode* root,int &mx)
    { 
        if(root==NULL)
            return 0;
        int l=p(root->left,mx);
        int r=p(root->right,mx);
        int x=0,y=0;
        if(root->left!=NULL&&root->left->val==root->val)
            x=l+1;
        if(root->right!=NULL && root->right->val==root->val)
            y=r+1;
        mx=max(mx,x+y);
        return max(x,y);
        
    }
    int longestUnivaluePath(TreeNode* root) {
        if(root==NULL)
            return 0;
        int mx=0;
        int c=p(root,mx);
        mx=max(c,mx);
        return mx;
    }
};