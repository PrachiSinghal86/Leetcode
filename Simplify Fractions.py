class Solution:
    def gcd(a,b):
        if b==0:
            return a
        return gcd(b,a%b)
    def simplifiedFractions(self, n: int) -> List[str]:
        s=[]
        for i in range(1,n):
            for j in range(i+1,n+1):
                if gcd(i,j)==1 or i==1:
                    f=str(i)+"/"+str(j)
                    s.append(f)
        return s
                    
        