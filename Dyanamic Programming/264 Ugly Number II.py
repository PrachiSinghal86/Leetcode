class Solution:
    def nthUglyNumber(self, n: int) -> int:
        if n<=6:
            return n
        a=[None]*n
        i2=i3=i5=0
        nx2=2
        nx3=3
        nx5=5
        a[0]=1
        for i in range(1,n):
            a[i]=min(nx2,nx3,nx5)
            if a[i]==nx2:
                i2=i2+1
                nx2=a[i2]*2
            if a[i]==nx3:
                i3=i3+1
                nx3=a[i3]*3
            if a[i]==nx5:
                i5=i5+1
                nx5=a[i5]*5
        return a[n-1]
            
            
        