class Solution:
    def matrixBlockSum(self, mat: List[List[int]], k: int) -> List[List[int]]:
        m=len(mat)
        n=len(mat[0])
        a=[[0 for i in range(n)] for j in range(m)]
        a[0][0]=mat[0][0]
        for i in range(1,n):
            a[0][i]=a[0][i-1]+mat[0][i]
        for j in range(1,m):
            a[j][0]=a[j-1][0]+mat[j][0]
        for i in range(1,m):
            for j in range(1,n):
                a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+mat[i][j]
        
        for i in range(m):
            for j in range(n):
                x=min(i+k,m-1)
                y=min(j+k,n-1)
                if i-k<=0 and j-k<=0:
                    
                    mat[i][j]=a[x][y]
                elif i-k<=0:
                    b=min(i+k,m-1)
                    mat[i][j]=a[x][y]-a[b][j-k-1]
                elif j-k<=0:
                    b=min(j+k,n-1)
                    mat[i][j]=a[x][y]-a[i-k-1][b]
                else:
                    mat[i][j]=a[x][y]+a[i-k-1][j-k-1]-a[i-k-1][y]-a[x][j-k-1]
        return mat
                    
                    
                    
                
           
        