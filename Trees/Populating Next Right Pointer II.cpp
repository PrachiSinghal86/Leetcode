/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<pair<Node*,int>>q;
        pair<Node*,int> tm;
        pair<Node*,int> tm2;
      if(root==NULL)
      {
          return root;
        }
        q.push(pair<Node*,int>(root,0));
        while(!q.empty())
        {
            tm=q.front();
            q.pop();
            if(!q.empty()){
            tm2=q.front();
            if(tm2.second==tm.second)
            {
                tm.first->next=tm2.first;
            }
            
        }
            if(tm.first->left)
              q.push(pair<Node*,int>(tm.first->left,tm.second+1));
            if(tm.first->right)
                q.push(pair<Node*,int>(tm.first->right,tm.second+1));
        }
        return root;
        
    }
};