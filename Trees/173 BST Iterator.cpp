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
class BSTIterator {
    
public:
    vector<TreeNode* > s;
    void inord_left(TreeNode*root,vector<TreeNode *>&s)
    {
        while(root)
        {
            s.push_back(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        inord_left(root,s);
    }
    
    /** @return the next smallest number */
    int next() {
        if(s.back()->right==NULL)
        {
            int x=s.back()->val;
            s.pop_back();
            return x;
        }
        else
        {
            int x=s.back()->val;
            TreeNode *f=s.back();
            s.pop_back();
            inord_left(f->right,s);
            return x;
        }
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(s.size()>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */