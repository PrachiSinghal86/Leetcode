class Solution {
public:
    int p(string s,int i,vector<int>&dp)
    {
        
        if(i==s.size())
            return 1;
        if(dp[i+1]!=-1)
            return dp[i+1];
        else if(s[i]=='0')
        {
            dp[i+1]=0;
            return 0;
        }
        else
        {   int t;
            t=p(s,i+1,dp);
            if(i+1<s.size())
            {
                int tp=s[i]-'0';
                tp=tp*10+(s[i+1]-'0');
                if(tp<=26)
                {
                    
                    dp[i+1]=t+p(s,i+2,dp);
                    return dp[i+1];
                }
            }
         dp[i+1]=t;
         return t;
    }
    }
        
    int numDecodings(string s) {
        int c=0;
        vector<int>dp(s.size()+1,-1);
        c=p(s,0,dp);
        return c;
    }
};