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
    
    vector<vector<int>> levelOrder(Node* root) {
      queue <pair<Node*,int>>q;
        vector<int>t;
        vector<vector<int>>ot;
        int c=0;
        q.push(make_pair(root,0));
        if(root==NULL)
            return ot;
      
        while(!q.empty())
        {
            pair<Node *,int>tmp;
            tmp=q.front();
            q.pop();
            if(tmp.second==c)
            {
               
                t.push_back(tmp.first->val);
            }
            else
            {
                c+=1;
                ot.push_back(t);
                t.clear();
                t.push_back(tmp.first->val);
            }
            for(int i=0;i<tmp.first->children.size();i++)
            {
                q.push(make_pair(tmp.first->children[i],tmp.second+1));
            }
        }
        ot.push_back(t);
        return ot;
    }
};