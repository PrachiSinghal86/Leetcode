class Solution {
    unordered_map<string,bool>dp;
public:
    
    bool wordBreak(string s, vector<string>& wordDict) {
        if(dp.find(s)!=dp.end())
            return dp[s];
        
        dp[s]=false;
        for(string w:wordDict)
        {
            if(s.substr(0,w.length())==w)
            {
                if(s.length()==w.length())
                    dp[s]= true;
                else
                {
                    dp[s]=(dp[s]|| wordBreak(s.substr(w.length()),wordDict));
                    
                }
            }
        }
        cout<<s<<" "<<dp[s]<<" ";
        return dp[s];
    }
};