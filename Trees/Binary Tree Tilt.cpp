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
    int p(TreeNode* root,int &sum)
    {
         if(root==NULL)
            return 0;
        int x=p(root->left,sum);
         int y=p(root->right,sum);
         int z=x+y+root->val;
        //cout<<z;
        sum+=abs(x-y);
        //cout<<root->val;
        return z;
    }
    int findTilt(TreeNode* root) {
         if(root==NULL)
            return 0;
        int sum=0;
       p(root,sum);
       return sum;
    }
};