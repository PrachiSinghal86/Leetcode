class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        p=[ [0]*n for i in range(m)]
        for i in range(n):
            p[m-1][i]=1
        for i in range(m):
            p[i][n-1]=1
        for i in range(m-2,-1,-1):
            for j in range(n-2,-1,-1):
                p[i][j]=p[i][j+1]+p[i+1][j]
        return p[0][0]
                
        