/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void p(Node* root,int t,int &mx)
    {
        if(root==NULL)
            return;
        mx=max(mx,t);
        for(int i=0;i<root->children.size();i++)
        {
            p(root->children[i],t+1,mx);
        }
    }
    int maxDepth(Node* root) {
        if(root==NULL)
        {
            return 0;
        }
        int mx=1,t=2;
        for(int i=0;i<root->children.size();i++)
        {
            p(root->children[i],t,mx);
        }
        return mx;
    }
};