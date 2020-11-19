class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    int s=dp[i-coins[j]];
                    if(s != INT_MAX && s + 1 < dp[i])
                        dp[i]=s+1;
                }
            }
        }
        if(dp[amount]==INT_MAX)
            return -1;
        return dp[amount];
    }
};