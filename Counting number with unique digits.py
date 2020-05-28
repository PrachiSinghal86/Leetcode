class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        if n==0:
            return 1
        elif n==1:
            return 10
        k=2
        p=10
        while k<=n:
            s=81
            d=8
            for i in range(3,k+1):
                s=s*d
                d-=1
            p+=s
            k+=1
        return p
            
        
        
        