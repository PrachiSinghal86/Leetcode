class Solution {
public:
    bool p(map<string,vector<pair<string,double>>>m,string a,string b,double d,vector<double>&ot,map<string,bool>&vis)
    {
        for(int i=0;i<m[a].size();i++)
        {   
            if(m[a][i].first==b)
            {
                
                ot.push_back(d*m[a][i].second);
                return true;
            }
            if(vis[m[a][i].first]==true)
                continue;
           vis[m[a][i].first]=true;
            bool c=p(m,m[a][i].first,b,d*m[a][i].second,ot,vis);
             vis[m[a][i].first]=false;
            if(c)
                return c;
        }
        return false;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string,vector<pair<string,double>>>m;
        map<string,bool>vis;
        for(int i=0;i<values.size();i++)
        {
            
                m[equations[i][0]].push_back(make_pair(equations[i][1],values[i]));
                
                vis[equations[i][0]]=false;
                m[equations[i][1]].push_back(make_pair(equations[i][0],1/values[i]));
                vis[equations[i][1]]=false;
               //cout<<m[equations[i][0]].back();
        }
        vector<double>ot;
        for(int i=0;i<queries.size();i++)
        {
                
           
                if(m.find(queries[i][0])==m.end()||m.find(queries[i][1])==m.end())
                {
                    ot.push_back(-1.00000);
                }
            else if(queries[i][0]==queries[i][1])
                ot.push_back(1.00000);
                else{
                    double d=1.00000;
                    vis[queries[i][0]]=true;
                p(m,queries[i][0],queries[i][1],d,ot,vis);
                     vis[queries[i][0]]=false;
                }
            if(ot.size()<i+1)
                ot.push_back(-1.00000);
        }
        return ot;
    }
};