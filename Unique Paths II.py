class Solution:
    def uniquePathsWithObstacles(self, og: List[List[int]]) -> int:
        m=len(og)
        n=len(og[0])
        if og[0][0]==1 or og[m-1][n-1]==1:
            a=0
            return a
        
        p=[ [0]*n for i in range(m)]
        p[m-1][n-1]=1
        for i in range(n-2,-1,-1):
            if og[m-1][i]==0 and p[m-1][i+1]==1:
                p[m-1][i]=1
        print(p)
                
        for i in range(m-2,-1,-1):
            if og[i][n-1]==0 and p[i+1][n-1]==1:
                p[i][n-1]=1
        print(p)
        for i in range(m-2,-1,-1):
            for j in range(n-2,-1,-1):
                if og[i][j]==0:
                    p[i][j]=p[i][j+1]+p[i+1][j]
        return p[0][0]
                
        