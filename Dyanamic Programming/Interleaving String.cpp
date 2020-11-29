class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if((s1.size()==0&&s2==s3)||(s2.size()==0&&s1==s3))
            return true;
        vector<vector<bool>>dp(s1.size()+1,vector<bool>(s2.size()+1,false));
        dp[0][0]=true;
        if(s1.size()+s2.size()!=s3.size())
            return false;
        for(int i=1;i<=s2.size();i++)
        {
            if(s2[i-1]==s3[i-1])
                dp[0][i]=true;
            else
                break;
        }
        //cout<<dp[0][1]<<dp[1][0];
          for(int i=1;i<=s1.size();i++)
        {
            if(s1[i-1]==s3[i-1])
                dp[i][0]=true;
            else
                break;
        }
        for(int i=1;i<=s1.size();i++)
        {
            for(int j=1;j<=s2.size();j++)
            {
                if(s3[i+j-1]==s1[i-1])
                    dp[i][j]=dp[i-1][j];
                cout<<dp[i][j];
                if(s3[i+j-1]==s2[j-1])
                {
                    dp[i][j]=dp[i][j]||dp[i][j-1];
                }
                //cout<<dp[i][j-1];
            }
        }
        return dp[s1.size()][s2.size()];
    }
};