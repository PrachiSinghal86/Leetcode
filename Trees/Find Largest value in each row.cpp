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
    vector<int> largestValues(TreeNode* root) {
        queue <pair<TreeNode*, int>> q;
        vector<int>ot;
        if(root==NULL)
            return ot;
        int cur=1;
        int mx=root->val;
        q.push(make_pair(root,1));
        while(!q.empty())
        {
            pair<TreeNode*, int>temp=q.front();
            q.pop();
            if(temp.second==cur)
            {
                mx=max(mx,temp.first->val);
            }
            else
            {
                ot.push_back(mx);
                mx=temp.first->val;
                cur+=1;
            }
            if(temp.first->left!=NULL)
            {
                q.push(make_pair(temp.first->left,temp.second+1));
            }
             if(temp.first->right!=NULL)
            {
                q.push(make_pair(temp.first->right,temp.second+1));
            }
        }
        ot.push_back(mx);
        return ot;
    }
};