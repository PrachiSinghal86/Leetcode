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
    void p(TreeNode *root, int cl, int& mx,int& s)
        {
           if(root==NULL)
               return;
           if(cl==mx)
               {
               s=s+root->val;
           }
        if(cl>mx)
            {
            s=root->val;
            mx=cl;
        }
        p(root->left,cl+1,mx,s);
        p(root->right,cl+1,mx,s);
        }
    int deepestLeavesSum(TreeNode* root) {
        int s=0,cl=0,mx=0;
        p(root,cl,mx,s);
        return s;
    }
};