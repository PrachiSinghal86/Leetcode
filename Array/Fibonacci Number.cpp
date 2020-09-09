class Solution {
public:
    int fib(int N) {
        int a=0,b=1,c;
        if(N==0)
            return 0;
        else if(N<=2)
            return 1;
        for(int i=3;i<=N+1;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};