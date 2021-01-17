class Solution {
public:
    int countVowelStrings(int n) {
       int c=0;
        if(n==1)
            return 5;
        
        for(int i=0;i<5;i++)
        {
            p(c,i,n-1);
        }
        return c;
    }
    void p(int &c,int i,int n)
    {
        if(n==0)
        {
            c+=1;
            return;
        }
        for(int j=i;j<5;j++)
        {
            p(c,j,n-1);
        }
        
    }
};