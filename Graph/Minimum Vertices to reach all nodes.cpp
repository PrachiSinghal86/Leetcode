class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>v(n,0);
        for(int i=0;i<edges.size();i++)
        {
            v[edges[i][1]]=1;
        }
        vector<int>ot;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
                ot.push_back(i);
        }
        return ot;
    }
};