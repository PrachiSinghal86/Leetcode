class Solution:
    def numTrees(self, n: int) -> int:
        if n<=1:
            return 1
        a=[0]*(n+1)
        a[0]=1
        a[1]=1
        
        a[2]=2
        for i in range(3,n+1):
            for j in range(i):
                a[i]=a[i]+(a[j]*a[i-j-1])
       
        return a[n]
                
            
        