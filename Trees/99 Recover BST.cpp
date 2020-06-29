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
    void p(TreeNode* root,TreeNode*& prev,TreeNode*& fir,TreeNode*& mid,TreeNode*& last)
    {
        
        if(root)
        {
            p(root->left,prev,fir,mid,last);
            if(prev&& root->val<prev->val)
            {
                if(fir==NULL)
                {
                    fir=prev;
                    mid=root;
                }
                else
                {
                    last=root;
                }
            }
            prev=root;
            p(root->right,prev,fir,mid,last);
        }
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL)
            return;
        TreeNode* prev,*fir, *mid, *last;
        prev=fir=mid=last=NULL;
        p(root,prev,fir,mid,last);
        if(last)
        {
            int t=last->val;
            
            
            last->val=fir->val;
            fir->val=t;
        }
        else
        {
            int t=mid->val;
            mid->val=fir->val;
            fir->val=t;
        }
        return ;
    }
};