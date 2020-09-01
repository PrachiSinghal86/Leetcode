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
    TreeNode* minval(TreeNode* root)
    {
        TreeNode * cur=root;
        while(cur&&cur->left!=NULL)
            cur=cur->left;
        return cur;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        if(root->val<key)
            root->right=deleteNode(root->right,key);
        else if(root->val>key)
            root->left=deleteNode(root->left,key);
       else
       {
           if(root->left==NULL)
           {
               TreeNode *t=root->right;
               
               return t;
           }
           else if(root->right==NULL)
           {
               TreeNode *t=root->left;

               return t;
               
           }
           TreeNode* t=minval(root->right);
           root->val=t->val;
            root->right = deleteNode(root->right, t->val);
           
       }
        return root;
    }
};