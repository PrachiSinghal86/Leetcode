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
    int c=0;
    int minCameraCover(TreeNode* root) {
        pair<bool,bool> s=dfs(root);
        if(!s.second)
            c+=1;
        return c;
    }
    pair<bool,bool> dfs(TreeNode* root)
        {
        if(root==NULL)
            return {false,true};
    
    pair<bool,bool>l=dfs(root->left);
    pair<bool,bool>r=dfs(root->right);
    bool hc=false;
    bool m=false;
 if(l.first||r.first)
     m=true;
    if(!l.second||!r.second)
        {
        hc=true;
        m=true;
        c+=1;
    }
    return {hc,m};}
};