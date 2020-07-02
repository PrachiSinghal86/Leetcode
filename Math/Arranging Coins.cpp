class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=1)
        {
            return n;
        }
        int c=1;
        long long int s=1;
        while(s<n)
        {
            c=c+1;
            s=s+c;
            if(s>n)
            {
                return c-1;
            }
            
        }
        return c;
    }
};