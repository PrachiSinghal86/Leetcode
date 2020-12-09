class Solution {
public:
    int uniqueLetterString(string s) {
        vector<vector<int>>v(26);
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'A'].push_back(i);
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                int p=j>0?v[i][j-1]:-1;
                int n=j<v[i].size()-1?v[i][j+1]:s.size();
                c=c+((v[i][j]-p)*(n-v[i][j]))%1000000007;
                c=c%1000000007;
            }
        }
        return c;
        
    }
};