class Solution {
public:
    bool isvalid(vector<vector<int>>& grid,int i,int j)
    {
        if(i>=0&&i<grid.size()&&j>=0&&j<grid.size()&&grid[i][j]==1)
            return true;
        return false;
    }
    void dfs(vector<vector<int>>& grid,int i,int j,int &c,int id)
    {
        grid[i][j]=id;
        if(isvalid(grid,i+1,j))
        {
            c=c+1;
            dfs(grid,i+1,j,c,id);
        }
         if(isvalid(grid,i-1,j))
        {
            c=c+1;
            dfs(grid,i-1,j,c,id);
        }
         if(isvalid(grid,i,j-1))
        {
            c=c+1;
            dfs(grid,i,j-1,c,id);
        }
         if(isvalid(grid,i,j+1))
        {
            c=c+1;
            dfs(grid,i,j+1,c,id);
        }
    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int mx=0;
        int id=2;
        map<int,int>m;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                int c=1;
                if(isvalid(grid,i,j))
                {
                    grid[i][j]=id;
                    dfs(grid,i,j,c,id);
                    mx=max(mx,c);
                    m[id]=c;
                    id+=1;
                }
            }
        }
     for(int i=0;i<grid.size();i++)
     {
         for(int j=0;j<grid.size();j++)
         {
             
             if(grid[i][j]==0)
             {
                 set<int>s;
                 int cnt=1;
                 if(i>0&&grid[i-1][j]>0)
                 {
                     s.insert(grid[i-1][j]);
                     cnt=cnt+m[grid[i-1][j]];
                 }
                 if(i<grid.size()-1&&grid[i+1][j]>0)
                 {
                     if(s.find(grid[i+1][j])==s.end()){
                      s.insert(grid[i+1][j]);
                     cnt=cnt+m[grid[i+1][j]];
                     }
                 }
                  if(j<grid.size()-1&&grid[i][j+1]>0)
                 {
                     if(s.find(grid[i][j+1])==s.end()){
                      s.insert(grid[i][j+1]);
                     cnt=cnt+m[grid[i][j+1]];
                     }
                 }
                    if(j>0&&grid[i][j-1]>0)
                 {
                     if(s.find(grid[i][j-1])==s.end()){
                      s.insert(grid[i][j-1]);
                     cnt=cnt+m[grid[i][j-1]];
                     }
                 }
                 mx=max(mx,cnt);
             }
         }
     }
        return mx;
    }
};