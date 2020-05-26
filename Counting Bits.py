class Solution:
    def countBits(self, num: int) -> List[int]:
        s=[0]*20
        a=[0]
        c=0
        j=19
        for i in range(1,num+1):
            j=19
            if s[j]==0:
                c=c+1
                s[j]=1
            else:
                while s[j]==1:
                    c-=1
                    s[j]=0
                    j-=1
                s[j]=1
                c+=1
            a.append(c)
        return a
                    
        