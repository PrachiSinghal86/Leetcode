class Node
{
    public:
    int x,y,t;
    Node(int a,int b,int t1)
    {
        x=a;
        y=b;
        t=t1;
    }
};
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int m=grid.size();
        if(m==0)
            return -1;
         int n=grid[0].size();
         int i,j;
         queue< Node*>q;
        bool p1=false,p2=false;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    p2=true;
                    Node* n1=new Node(i,j,0);
                    q.push(n1);
                }
                if(grid[i][j]==1)
                    p1=true;
            }
        }
        if(!p2&&!p1)
            return 0;
        Node* f;
        int lt;
        while(!q.empty())
        {
             f=q.front();
            lt=f->t;
            if(f->x>0&&grid[f->x-1][f->y]==1)
            {
                Node* n1=new Node(f->x-1,f->y,f->t+1);
                q.push(n1);
                grid[f->x-1][f->y]=2;
            }
            if(f->x<m-1&&grid[f->x+1][f->y]==1)
            {
                 Node* n1=new Node(f->x+1,f->y,f->t+1);
                q.push(n1);
                grid[f->x+1][f->y]=2;
            } 
              if(f->y<n-1&&grid[f->x][f->y+1]==1)
            {
                 Node* n1=new Node(f->x,f->y+1,f->t+1);
                q.push(n1);
                grid[f->x][f->y+1]=2;
            } 
              if(f->y>0&&grid[f->x][f->y-1]==1)
            {
                 Node* n1=new Node(f->x,f->y-1,f->t+1);
                q.push(n1);
                grid[f->x][f->y-1]=2;
            }
            q.pop();
                
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return lt;
    }
};