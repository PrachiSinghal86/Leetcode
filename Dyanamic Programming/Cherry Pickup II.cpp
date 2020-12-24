class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
          int n=grid.size();
          int m=grid[0].size();
       vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-2)));
        //cout<<"a";
        int ans=helper(grid,dp,0,0,m-1);
        if(ans==-1)
            return 0;
        return ans;
    }
        int helper(vector<vector<int>>& grid,vector<vector<vector<int>>>&dp,int r1,int c1,int c2)
    {
        
        
        if(r1>=grid.size()||c1>=grid[0].size()||c2>=grid[0].size())
            return -1;
        if(r1==grid.size()-1)
            
        {   if(c1!=c2)
            return grid[r1][c1]+grid[r1][c2];
           return grid[r1][c1];
        }
     
        //cout<<"b";
        if(dp[r1][c1][c2]!=-2)
            return dp[r1][c1][c2];
        int cur=grid[r1][c1]+grid[r1][c2];
        if(c1==c2)
            cur-=grid[r1][c1];
        int ans=INT_MIN;
         ans=max(ans,helper(grid,dp,r1+1,c1+1,c2+1));
         ans=max(ans,helper(grid,dp,r1+1,c1+1,c2));
         ans=max(ans,helper(grid,dp,r1+1,c1,c2+1));
         ans=max(ans,helper(grid,dp,r1+1,c1,c2));
         ans=max(ans,helper(grid,dp,r1+1,c1-1,c2));
         ans=max(ans,helper(grid,dp,r1+1,c1,c2-1));
         ans=max(ans,helper(grid,dp,r1+1,c1-1,c2-1));
        ans=max(ans,helper(grid,dp,r1+1,c1+1,c2-1));
        ans=max(ans,helper(grid,dp,r1+1,c1-1,c2+1));
        //cout<<ans<<" ";
        if(ans==-1)
        {  dp[r1][c1][c2]=-1;
        return -1;
        }
        dp[r1][c1][c2]=ans+cur;
        return ans+cur;
    }
};