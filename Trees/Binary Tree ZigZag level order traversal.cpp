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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int cur=0;
      vector<int>temp;
      vector<vector<int>> output;
        queue<pair<TreeNode*,int>>q;
        pair<TreeNode*,int> tm;
      if(root==NULL)
      {
          return output;
        }
        q.push(pair<TreeNode*,int>(root,0));
        while(!q.empty())
        {
            tm=q.front();
            q.pop();
            if(tm.second==cur)
            {
                temp.push_back(tm.first->val);
            }
            else
            {
                if(cur%2!=0)
                    reverse(temp.begin(),temp.end());
                cur+=1;
                output.push_back(temp);
                temp.clear();
                 temp.push_back(tm.first->val);
            }
            if(tm.first->left!=NULL)
            {
                q.push(pair<TreeNode*,int>(tm.first->left,tm.second+1));
            }
             if(tm.first->right!=NULL)
            {
                q.push(pair<TreeNode*,int>(tm.first->right,tm.second+1));
            }
        }
        if(cur%2!=0)
            reverse(temp.begin(),temp.end());
        output.push_back(temp);
     
        return output;
    }
};