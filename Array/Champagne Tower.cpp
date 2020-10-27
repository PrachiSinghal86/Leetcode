class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>dp(2,vector<double>(query_row+1,0.0));
        if(poured==0)
            return 0.0;
        int c=1,l=0;
        dp[0][0]=poured;
        for(int i=1;i<=query_row;i++)
        {
            if(dp[l][0]>1.0)
                dp[c][0]=(dp[l][0]-1.0)/2;
            else
                dp[c][0]=0.0;
            for(int j=1;j<=i;j++)
            {   dp[c][j]=0.0;
                if(dp[l][j-1]>1.0)
                    dp[c][j]=(dp[l][j-1]-1.0)/2;
                if(dp[l][j]>1.0)
                    dp[c][j]+=(dp[l][j]-1.0)/2;
            }
            int t=c;
            c=l;
            l=t;
        }
        if(dp[l][query_glass]>1.0)
            return 1.0;
        else
            return dp[l][query_glass];
    }
};