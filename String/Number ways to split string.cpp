class Solution {
public:
    int numWays(string s) {
        int n=count(s.begin(),s.end(),'1');
        if(n%3!=0)
            return 0;
        int c=0,i=-1,j;
        if(n==0)
        {
            if(s.size()==3)
                return 1;
            return (int)((((s.size()-1)*(s.size()-2))/2)%1000000007);
        }
        n=n/3;
        while(c<n)
        {
            i+=1;
            if(s[i]=='1')
                c++;
        }
        j=i+1;
        while(s[j]=='0')
            j++;
        int d=j-i%1000000007;
        c=0;
        i=j-1;
        while(c<n)
        {
            i+=1;
            if(s[i]=='1')
                c++;
        }
         j=i+1;
        while(s[j]=='0')
            j++;
        long long int x=(j-i)%1000000007;
         d=(int)((d*(x))%1000000007);
        return d;
    }
};