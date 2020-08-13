class Solution {
public:
    void p(vector<vector<int>>&ot,vector<int>&t,vector<vector<int>>& graph,int ind)
    {
        if(ind==graph.size()-1)
        {
            
            ot.push_back(t);
            
            return;
        }
        for(int i=0;i<graph[ind].size();i++)
        {
            t.push_back(graph[ind][i]);
            p(ot,t,graph,graph[ind][i]);
            t.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ot;
        vector<int>v(0,graph.size());
        vector<int>t;
        t.push_back(0);
        p(ot,t,graph,0);
        return ot;
        
    }
};