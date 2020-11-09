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
    void p(TreeNode* root,int mn,int mx,int &d)
    {
        if(root==NULL)
            return;
        int x=abs(mx-root->val);
        d=max(d,x);
        x=abs(mn-root->val);
        d=max(d,x);
        mx=max(root->val,mx);
        mn=min(root->val,mn);
        p(root->left,mn,mx,d);
        p(root->right,mn,mx,d);
    }
    int maxAncestorDiff(TreeNode* root) {
        int d=0;
        p(root,root->val,root->val,d);
        return d;
    }
};