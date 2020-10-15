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
    void p(TreeNode* root,int L,int R,int &c)
    {
        if(root==NULL)
            return;
        if(root->val>=L&&root->val<=R)
            c+=root->val;
        if(root->val>L)
        {
            p(root->left,L,R,c);
            
        }
        if(root->val<R)
        {
            p(root->right,L,R,c);
        }
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        int c=0;
        p(root,L,R,c);
        return c;
    }
};