class Solution {
public:
    int ps(int n)
    {
        int a[n+1];
        memset(a,0,sizeof(a));
        a[0]=-1;
        a[1]=-1;
        int j,c=0; 
        for(int i=2;i<=n;i++)
        {
            if(a[i]!=-1){
                c+=1;
            for(j=i*i;j<=n;j=j+i)
            {
                a[j]=-1;
            }}
        }
        return c;
            
    }
    int numPrimeArrangements(int n) {
        long int ot=1;
        int pn=ps(n);
        
        for(int i=pn;i>=2;i--)
        {
            ot=ot*i;
            ot=ot%1000000007;
        }
        for(int i=n-pn;i>=2;i--)
        {
            ot=ot*i;
            ot=ot%1000000007;   
        }
        return ot;
    }
};