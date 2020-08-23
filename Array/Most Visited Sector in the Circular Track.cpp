class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        vector<int> dp(n+1,0);
        int i,j;
        dp[rounds[0]]=1;
        for(i=0;i<rounds.size()-1;i++)
        {
            int j=rounds[i]+1;
            while(1)
            {
                if(j==rounds[i+1]+1)
                {
                    break;
                }
                if(j==n+1)
                {
                    j=1;
                }
                dp[j]+=1;
                j++;
            }
        }
        vector<int>ot;
        int mx=*max_element(dp.begin(),dp.end());
        
        for(i=1;i<=n;i++)
        {
            if(dp[i]==mx)
                ot.push_back(i);
        }
        return ot;
    }
};