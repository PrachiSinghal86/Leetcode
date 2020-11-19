class Solution {
public:
    bool ispalin(string s)
    {
        for(int i=0;i<s.size()/2;i++)
            if(s[i]!=s[s.size()-1-i])
                return false;
        return true;
    }
    void p(string s,vector<vector<string>>&ot,vector<string>t,int i)
    {
        if(s.size()==i)
        {
            ot.push_back(t);
            return;
        }
        for(int j=i;j<s.size();j++)
        {
            if(ispalin(s.substr(i,j-i+1)))
            {
                t.push_back(s.substr(i,j-i+1));
                p(s,ot,t,j+1);
                t.pop_back();
            }
        }
        return ;
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>>ot;
        vector<string>t;
        if(s.size()==0)
        {   ot.push_back(t); 
            return ot;
        }
         
         p(s,ot,t,0);
        return ot;
    }
};