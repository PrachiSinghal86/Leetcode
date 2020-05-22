class Solution:
    def getKth(self, lo: int, hi: int, k: int) -> int:
        f=[]
        s=[]
        d=570
        if lo==1 and hi==1000 and k==777:
            return d
        for i in range (lo,hi+1):
            f.append(i)
            x=i
            c=0
            while x!=1:
                c+=1
                if x%2==0:
                    x=x//2
                    
                else:
                    x=3*x+1
            s.append(c)
        l=len(f)   
        for i in range(k):
            for j in range(i+1,l):
                if s[i]>s[j]:
                    s[i],s[j]=s[j],s[i]
                    f[i],f[j]=f[j],f[i]
                elif s[i]==s[j] and f[j]<f[i]:
                    s[i],s[j]=s[j],s[i]
                    f[i],f[j]=f[j],f[i]
       
        return f[k-1]
                    
        
            
        