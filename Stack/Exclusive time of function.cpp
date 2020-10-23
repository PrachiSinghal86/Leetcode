class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>v(n,0);
        int c=0;
        stack<pair<int,int>>s;
        for(int i=0;i<logs.size();i++)
        {
            int stp=logs[i].find(":");
            if(logs[i][stp+1]=='e')
            {
                v[s.top().first]=stoi(logs[i].substr(stp+5))+v[s.top().first]-s.top().second+1;
               
                s.pop();
                if(!s.empty())
                s.top().second=stoi(logs[i].substr(stp+5))+1;
            
            }
            else
            {
                if(s.empty())
                {
                     s.push(make_pair(stoi(logs[i].substr(0,stp)),stoi(logs[i].substr(stp+7))));      

                }
                else
                {
                    v[s.top().first]=v[s.top().first]+stoi(logs[i].substr(stp+7))-s.top().second;
               
                    s.push(make_pair(stoi(logs[i].substr(0,stp)),stoi(logs[i].substr(stp+7))));
                }
            }
        }
        return v;
    }
};