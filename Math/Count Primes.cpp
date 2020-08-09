class Solution {
public:
    int countPrimes(int n) {
        int a[n+1],c=0;
        memset(a,0,sizeof(a));
        for(int i=2;i<n;i++)
        {
            if(a[i]==0&&i<46340)
            {
                c+=1;
                for(int j=i*i;j<n;j+=i)
                    a[j]=1;
            }
            else if(a[i]==0)
                c+=1;
        }
        return c;
    }
};