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
    void p(TreeNode* root,int &sum,int r)
    {
        
        if(root->left==NULL&&root->right==NULL)
        {
            sum+=(r*10+root->val);
            
            return;
        }
        if(root->left!=NULL)
          p(root->left,sum,r*10+root->val);
        if(root->right!=NULL)
            p(root->right,sum,r*10+root->val);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int r=0;
        if(root==NULL)
            return 0;
        p(root,sum,r);
        return sum;
    }
};