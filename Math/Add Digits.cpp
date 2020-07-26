class Solution {
public:
    int addDigits(int num) {
        int x=0;
        while(num)
        {
            int m=num%10;
            x=x+m;
            if(x/10>0)
            {
                x=(x%10)+(x/10);
            }
            num=num/10;
        }
        return x;
    }
};