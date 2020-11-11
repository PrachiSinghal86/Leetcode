class Solution {
public:
    int numSquares(int n) {
        int a=sqrt(n);
        if(a*a==n)
            return 1;
        while(n%4==0)
            n=n/4;
        if(n%8==7)
            return 4;
        int i;
        for(i=1;i*i<=n;i++)
            {
            int k=n-i*i;
            int t=sqrt(k);
            if(t*t==k)
                return 2;
        }
        return 3;
    }
};