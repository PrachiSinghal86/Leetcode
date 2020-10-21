class Solution {
    unordered_map<string,vector<string>>dp;
public:
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        if(dp.find(s)!=dp.end())
            return dp[s];
        vector<string>ot;
        for(string w:wordDict)
        {
            if(s.substr(0,w.length())==w)
            {
                if(w.length()==s.length())
                  ot.push_back(w);
                else
                {
                    vector<string>t=wordBreak(s.substr(w.length()),wordDict);
                    for(string temp:t)
                    {
                        ot.push_back(w+" "+temp);
                    }
                }
            }
        }
        dp[s]=ot;
        return ot;
    }
};