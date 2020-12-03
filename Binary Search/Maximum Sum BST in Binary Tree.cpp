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
class x
{
    public:
    bool isb;
    int mx;
    int mn;
    int s;
    x(bool a,int b,int c,int d)
    {
        isb=a;
        mx=b;
        mn=c;
        s=d;
    }
};
class Solution {
public:
    x temp(TreeNode*root, int&maxsum)
    {
        if(root==NULL)
        {
            x p(true,INT_MIN,INT_MAX,0);
            return p;
        }
        x t1(temp(root->left,maxsum));
        x t2(temp(root->right,maxsum));
        if(t1.isb&&t2.isb)
        {
            if(t1.mx<root->val&&t2.mn>root->val)
            {
                maxsum=max(maxsum,t1.s+t2.s+root->val);
                x p(true,max(t2.mx,root->val),min(t1.mn,root->val),t1.s+t2.s+root->val);
                return p;
            }
            
        }
        x k(false,0,0,0);
        return k;
        
        
    }
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
        temp(root,maxsum);
        return maxsum;
    }
};