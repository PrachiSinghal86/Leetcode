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
    void p(TreeNode* root1,vector<int>&ot1)
    {
        if(root1==NULL)
            return;
        p(root1->left,ot1);
        ot1.push_back(root1->val);
        p(root1->right,ot1);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ot1;
        vector<int>ot2;
        vector<int>ot3;
        p(root1,ot1);
        p(root2,ot2);
        int i=0,j=0;
        while(i<ot1.size()&&j<ot2.size())
        {
            if(ot1[i]<ot2[j])
            {
                ot3.push_back(ot1[i]);
                i++;
            }
            else
            {
                 ot3.push_back(ot2[j]);
                j++;
            }
        }
        while(i<ot1.size())
        {
             ot3.push_back(ot1[i]);
                i++;
        }
        while(j<ot2.size())
        {
             ot3.push_back(ot2[j]);
                j++;
        }
        return ot3;
    }
};