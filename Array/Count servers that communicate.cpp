class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int>r(grid.size(),0);
        vector<int>c(grid[0].size(),0);
        int cnt=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    r[i]+=1;
                    c[j]+=1;
                }
            }
            if(r[i]>1)
                cnt=cnt+r[i];
        }
        for(int i=0;i<grid[0].size();i++)
        {
            if(c[i]>1)
            {
                for(int j=0;j<grid.size();j++)
                {
                    if(grid[j][i]==1&&r[j]==1)
                        cnt+=1;
                }
            }
        }
        return cnt;
    }
};