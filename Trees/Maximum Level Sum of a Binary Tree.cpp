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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        int mx=root->val;
        int ml=1,s=mx,cl=1;
        
        queue<pair<TreeNode*,int>>q;
        if(root->left!=NULL)
            q.push(make_pair(root->left,2));
        if(root->right!=NULL)
            q.push(make_pair(root->right,2));
        while(!q.empty())
        {
            pair<TreeNode*,int>qtemp=q.front();
            if(cl!=qtemp.second)
            {
                if(mx<s)
                {
                    mx=s;
                    ml=cl;
                    
                }
                cl+=1;
                s=qtemp.first->val;
               
            }
             else
            {
                s=s+qtemp.first->val;
            }
            if(qtemp.first->left!=NULL)
            {
                q.push(make_pair(qtemp.first->left,qtemp.second+1));
            }
            if(qtemp.first->right!=NULL)
            {
                q.push(make_pair(qtemp.first->right,qtemp.second+1));
            }
            q.pop();
        }
        
        if(mx<s)
        {
            ml=cl;
        }
        return ml;
         
    }
};