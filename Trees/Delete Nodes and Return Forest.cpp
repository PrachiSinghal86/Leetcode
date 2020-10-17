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
    void p(TreeNode* root,TreeNode* pr, vector<int>& to_delete,vector<TreeNode*>&ot)
    {
        if(root==NULL)
            return;
        
        if(count(to_delete.begin(),to_delete.end(),root->val)==1)
        {
            if(root->left!=NULL&&count(to_delete.begin(),to_delete.end(),root->left->val)!=1)
            {   
                ot.push_back(root->left);
                
            }
            if(root->right!=NULL&&count(to_delete.begin(),to_delete.end(),root->right->val)!=1)
            { ot.push_back(root->right);
             
            }
            p(root->left,root,to_delete,ot);
            p(root->right,root,to_delete,ot);
            if(root==pr->right)
                pr->right=NULL;
            else
                pr->left=NULL;
        }
        else
        {
            p(root->left,root,to_delete,ot);
              p(root->right,root,to_delete,ot);
        }
        
        
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ot;
        if(root==NULL)
            return ot;
       if(count(to_delete.begin(),to_delete.end(),root->val)!=1)
       {  ot.push_back(root);
       
       }
        p(root,root,to_delete,ot);
         
        return ot;
    }
};