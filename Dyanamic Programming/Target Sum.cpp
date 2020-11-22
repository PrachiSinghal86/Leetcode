class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(S>sum||S<-sum)
            return 0;
        vector<vector<int>>dp(nums.size(),vector<int>(2*sum+1,0));
        dp[0][sum+nums[0]]+=1;
        dp[0][sum-nums[0]]+=1;
        for(int i=0;i<nums.size()-1;i++)
        {
           for(int j=0;j<dp[0].size();j++)
           {
               if(dp[i][j]>0)
               {
                   dp[i+1][j-nums[i+1]]+=dp[i][j];
                   dp[i+1][j+nums[i+1]]+=dp[i][j];
               }
               //cout<<dp[i][j]<<" ";
           }
           // cout<<endl;
        }
        return dp[nums.size()-1][sum+S];
    }
};