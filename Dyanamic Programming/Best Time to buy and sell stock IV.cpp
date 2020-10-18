class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        if(2*k>prices.size())
            {
            int m=0;
            for(int b=1;b<prices.size();b++)
                m=m+max(0,prices[b]-prices[b-1]);
            return m;
        }
       int dp[k+1][prices.size()];
        int i,j,f;
        for(i=0;i<=k;i++)
        {
            dp[i][0]=0;
        }
        for(i=0;i<prices.size();i++)
            dp[0][i]=0;
        for(i=1;i<=k;i++)
        {
            for(j=1;j<prices.size();j++)
            {
                dp[i][j]=dp[i][j-1];
                for(f=0;f<j;f++)
                {
                    if(dp[i][j]<prices[j]-prices[f]+dp[i-1][f])
                        dp[i][j]=prices[j]-prices[f]+dp[i-1][f];
                        
                }
                
            }
           
        }
        return dp[k][prices.size()-1];
    }
};