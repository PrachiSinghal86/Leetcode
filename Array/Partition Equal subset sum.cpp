class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return true;
        }
       int s=0;
        for(int k=0;k<n;k++)
            s=s+nums[k];
        
        if(s%2!=0)
        {
            return false;
        }
        int x=(s/2)+1;
        bool dp[x][n+1];
        int i,j;
        for(i=0;i<n+1;i++)
        {
            dp[0][i]=true;
        }
        for(i=1;i<=s/2;i++)
            dp[i][0]=false;
        
        for(i=1;i<=s/2;i++)
        {
            for(j=1;j<=n;j++)
            {
                
                dp[i][j]=dp[i][j-1];
                if(nums[j-1]<=i)
                {
                    dp[i][j]=dp[i][j]||dp[i-nums[j-1]][j-1];
                }
                
            }
            
        }
        
        return dp[x-1][n];
    }
};