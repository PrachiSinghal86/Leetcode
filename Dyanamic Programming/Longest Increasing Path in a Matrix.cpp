
class Solution {
public:
    int dfs(vector<vector<int>>& matrix,int i,int j,int prev,vector<vector<int>>&dp)
    {
        if(i<0||i>matrix.size()-1||j<0||j>matrix[0].size()-1)
            return 0;
        else if(prev>=matrix[i][j])
            return 0;
        else if(dp[i][j]!=0)
            return dp[i][j];
        int p1=dfs(matrix,i-1,j,matrix[i][j],dp);
        int p2=dfs(matrix,i,j-1,matrix[i][j],dp);
        int p3=dfs(matrix,i,j+1,matrix[i][j],dp);
        int p4=dfs(matrix,i+1,j,matrix[i][j],dp);
        p1=max(p1,p2);
        p3=max(p3,p4);
        dp[i][j]=1+max(p1,p3);
        //cout<<dp[i][j];
        return dp[i][j];
    }
   
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return 0;
        int mx=0;
      vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),0));
       for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
               if(dp[i][j]==0)
               {
                  dfs(matrix,i,j,INT_MIN,dp);
                   //cout<<dp[i][j];
               }
               mx=max(mx,dp[i][j]);
           }
       }
        return mx;
    }
};