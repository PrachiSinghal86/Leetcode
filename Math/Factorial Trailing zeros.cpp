class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        long long x=5;
        while(x<=n)
        {
            c=c+(n/x);
            x=x*5;
        }
        return c;
    }
};