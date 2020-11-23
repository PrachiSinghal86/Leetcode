/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
       map<Node*,pair<Node*,bool>>m;
        Node*new_node=new Node(node->val);
        m.insert({node,{new_node,false}});
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            Node * t=q.front();
            q.pop();
            m[t].second=true;
            for(int i=0;i<t->neighbors.size();i++)
            {
                if(m.find(t->neighbors[i])==m.end())
                {
                    Node*tp=new Node(t->neighbors[i]->val);
                    m.insert({t->neighbors[i],{tp,false}});
                    q.push(t->neighbors[i]);
                }
                else
                {
                    if(m[t->neighbors[i]].second==true)
                    {
                        Node* tmp=m[t->neighbors[i]].first;
                        tmp->neighbors.push_back(m[t].first);
                        m[t].first->neighbors.push_back(m[t->neighbors[i]].first);
                        
                    }
                   
                }
            }
            
        }
        return new_node;
        
    }
};