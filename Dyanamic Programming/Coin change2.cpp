class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if(amount==0) return 1;
        if(coins.size()==0)
            return 0;
        sort(coins.begin(),coins.end());
        if(coins[0]>amount)
            return 0;
        vector<int>dp(amount,0);
        for(int i=0;i<coins.size();i++)
        {
            if(coins[i]>amount) break;
            dp[coins[i]-1]++;
            for(int j=coins[i];j<amount;j++)
            {
                dp[j]=dp[j]+dp[j-coins[i]];
            }
        }
        return dp[amount-1];
    }
};