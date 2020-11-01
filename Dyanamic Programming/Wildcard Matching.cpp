class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>>dp(s.size()+1,vector<bool>(p.size()+1));
        dp[0][0]=true;
        for(int i=1;i<=s.size();i++)
            dp[i][0]=false;
        for(int i=1;i<=p.size();i++)
            dp[0][i]=false;
        for(int i=1;i<=p.size();i++)
        {
            if(p[i-1]=='*')
                dp[0][i]=true;
            else
                break;
        }
        for(int i=1;i<=s.size();i++)
        {
            for(int j=1;j<=p.size();j++)
            {
                if(p[j-1]==s[i-1]||p[j-1]=='?')
                    dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*')
                {
                    dp[i][j]=(dp[i-1][j]||dp[i][j-1]);
                }
                else
                    dp[i][j]=false;
            }
        }
        return dp[s.size()][p.size()];
    }
};