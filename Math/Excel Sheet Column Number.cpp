class Solution {
public:
    int titleToNumber(string s) {
        int l=s.size(),i,c=0;
        for(i=0;i<l;i++)
        {
            c=c+(pow(26,i)*(s[l-i-1]-'A'+1));
        }
        return c;
    }
};