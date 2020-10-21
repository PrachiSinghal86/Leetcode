class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
     vector<int>dp(26,0);
        for(int i=0;i<26;i++)
        {
            dp[order[i]-'a']=i;
        }
        for(int i=1;i<words.size();i++)
        {
            int k=0,f=0;
            while(k<words[i].size()&&k<words[i-1].size())
            {
                if(dp[words[i][k]-'a']>dp[words[i-1][k]-'a'])
                {  f=1;
                    break;}
                else if(dp[words[i][k]-'a']<dp[words[i-1][k]-'a'])
                    return false;
                k+=1;
            }
            if(f==0&&words[i].size()<words[i-1].size())
                return false;
        }
        return true;
    }
};