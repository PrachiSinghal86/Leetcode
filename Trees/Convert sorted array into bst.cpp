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
    TreeNode* p(vector<int>& nums,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        int m=(i+j)/2;
        TreeNode* temp=new TreeNode(nums[m]);
        temp->left=p(nums,i,m-1);
        temp->right=p(nums,m+1,j);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      TreeNode *root=NULL;
        int i=0;
        int j=nums.size()-1;
        root=p(nums,i,j);
        return root;
    }
};