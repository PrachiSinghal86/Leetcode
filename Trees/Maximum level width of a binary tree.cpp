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
    
    int widthOfBinaryTree(TreeNode* root) {
        unsigned long long int m=1;
        unsigned long long int cur=0;
        if(root==NULL)
            return 0;
        queue<pair<TreeNode*,pair<unsigned long long int,unsigned long long int>>> q;
        q.push(make_pair(root,make_pair(1,0)));
        while(!q.empty())
        {
            pair<TreeNode*,pair<unsigned long long int,unsigned long long int>>tm;
            tm=q.front();
            if(cur<tm.second.first)
            {
                pair<TreeNode*,pair<unsigned long long int,unsigned long long int>>tmp;
                tmp=q.back();
                if(tmp.second.second-tm.second.second+1>m)
                {
                    m=tmp.second.second-tm.second.second+1;
                }
                cur++;
            }
           q.pop();
            if(tm.first->left!=NULL)
           q.push(make_pair(tm.first->left,make_pair(tm.second.first+1,tm.second.second*2)));
            if(tm.first->right!=NULL)
           q.push(make_pair(tm.first->right,make_pair(tm.second.first+1,tm.second.second*2+1)));
        }
        return m;
    }
};