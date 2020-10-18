class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> dp(ranges.size(),-1);
        for(int i=0;i<=n;i++)
            {
            if(ranges[i]!=0)
                {
            dp[max(0,i-ranges[i])]=max(min(n,i+ranges[i]),dp[max(0,i-ranges[i])]);
                }
        }
        int e=dp[0];
        
        int mx=-1,c=1;
        if(e==-1)
            return -1;
        for(int i=1;i<=n;i++)
            {
            
            if(i>e)
                {
                if(mx<=e)
                    return -1;
                cout<<i;
                c+=1;
                e=mx;
            }
            mx=max(mx,dp[i]);
        }
        return c;
    }
};