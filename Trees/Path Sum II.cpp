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
    void p(TreeNode *root,int s,int sum,vector<vector<int>>&ot,vector<int>tm)
    {
        if(root==NULL)
        {
            return;
        }
         tm.push_back(root->val);
        if(root->left==NULL &&root->right==NULL)
        {
             s=s+root->val;
           
             if(s==sum)
             {
                 ot.push_back(tm);
                 
             }
            return;
        }
        p(root->left,s+root->val,sum,ot,tm);
        p(root->right,s+root->val,sum,ot,tm);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
      vector<vector<int>> ot;
      int s=0;
        vector<int>tm;
        p(root,s,sum,ot,tm);
        return ot;
    }
};