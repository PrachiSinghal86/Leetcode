class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx;
        for(int i=0;i<accounts.size();i++)
        {
            int c=0;
            for(int j=0;j<accounts[0].size();j++)
                c+=accounts[i][j];
            mx=max(c,mx);
        }
        return mx;
    }
};