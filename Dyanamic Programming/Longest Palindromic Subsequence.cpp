class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),0));
        for(int i=0;i<s.size();i++)
            dp[i][i]=1;
        for(int st=s.size()-2;st>=0;st--)
        {
            for(int end=st+1;end<s.size();end++)
            {
                if(s[st]==s[end])
                    dp[st][end]=2+dp[st+1][end-1];
                else
                    dp[st][end]=max(dp[st+1][end],dp[st][end-1]);
            }
        }
        return dp[0][s.size()-1];
    }
};