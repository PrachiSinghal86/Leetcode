class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        m=len(word1)
        n=len(word2)
        a=[[0]*(n+1) for i in range(m+1)]
        for i in range(n+1):
            a[0][i]=i
        for i in range(m+1):
            a[i][0]=i
        for i in range(1,m+1):
            for j in range(1,n+1):
                if word1[i-1]==word2[j-1]:
                    c=0
                else:
                    c=1
                a[i][j]=min(1+a[i-1][j],a[i-1][j-1]+c,1+a[i][j-1])
        return a[m][n]
        
        