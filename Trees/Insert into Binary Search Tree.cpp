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
    void p(TreeNode* root, int val)
    {
        if(root==NULL)
        {
           TreeNode* temp=new TreeNode(val); 
            root=temp;
            return;
        }
        else if(root->left==NULL&&val<root->val)
        {
            TreeNode* temp=new TreeNode(val); 
            root->left=temp;
            return;
        }
        else if(root->right==NULL&&val>root->val)
        {
            TreeNode* temp=new TreeNode(val); 
            root->right=temp;
            return;
        }
        if(root->val>val)
            p(root->left,val);
        else
            p(root->right,val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* temp1=new TreeNode(val); 
            
            return temp1;
            
        }
        else{
        TreeNode* temp=root;
        
        p(temp,val);
        return root;}
    }
};