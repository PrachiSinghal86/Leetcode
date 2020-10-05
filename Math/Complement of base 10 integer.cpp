class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0)
            return 1;
        int c=0,i=0;
        while(N)
            {
            if(N%2==0)
                c+=(pow(2,i));
            i+=1;
            N=N/2;
        }
        return c;
    }
};