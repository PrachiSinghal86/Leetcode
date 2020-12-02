class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        n=len(grid[0])
        m=len(grid)
        c=0
        e1=n-1
        for i in range(m):
            s=0
            e=e1
            while s<=e:
                mid=(e+s)//2
                if grid[i][mid]<0:
                    if mid==0 or grid[i][mid-1]>=0:
                        c=c+(e1-mid+1)*(m-i)
                        e1=mid-1
                        break
                    else:
                        e=mid-1
                else:
                    s=mid+1
            
            if e1==-1:
                break
        return c
            
        