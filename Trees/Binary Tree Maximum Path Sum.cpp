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
    int p(TreeNode* root,int &res)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=p(root->left,res);
        int r=p(root->right,res);
        int temp=max(l,r)+root->val;
        if(res<l+r+root->val)
        {
            res=l+r+root->val;
        }
        if(res<temp)
        {
            res=temp;
        }
        if(res<root->val)
        {
            res=root->val;
        }
        if(temp>root->val)
        return temp;
        else
        {
            return root->val;
        }
        
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        {
            
            return 0;
        }
        int res=INT_MIN;
        p(root,res);
        return res;
        
    }
};