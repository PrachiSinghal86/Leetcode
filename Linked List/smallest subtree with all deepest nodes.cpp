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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode* ans=root;
        int hm=0;
        p(root,0,ans,hm);
       
        return ans;
    }
    int p(TreeNode* root,int h,TreeNode* &ans,int &hm)
    {
        
        if(root==NULL)
          
            return h;
        
        if(hm<h)
        {
              
            hm=h;
            
            ans=root;
        }
        int s=p(root->right,h+1,ans,hm);
        int l=p(root->left,h+1,ans,hm);
        if(s==l&&hm==s-1)
        {
          
           ans=root;
        }
      
        return max(s,l);
    }
};