class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m,n,i,j;
        m=grid.size();
        if(m==0)
        {
            return 0;
        }
        n=grid[0].size();
        
        for(i=1;i<n;i++)
        {
            grid[0][i]=grid[0][i]+grid[0][i-1];
        }
          for(i=1;i<m;i++)
        {
            grid[i][0]=grid[i][0]+grid[i-1][0];
        }
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                if(grid[i][j-1]<grid[i-1][j])
                {
                     grid[i][j]=grid[i][j]+grid[i][j-1];
                }
                else
                {
                     grid[i][j]=grid[i-1][j]+grid[i][j];
                }
            }
        }
        return grid[m-1][n-1];
        
    }
};