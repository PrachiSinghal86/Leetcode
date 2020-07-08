class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());
     int i=0,j=0,c=0;
        int s1=g.size(),s2=s.size();
        while(i<s1&&j<s2)
        {
            if(g[i]<=s[j])
            {
                c+=1;
                i++;
                j++;
            }
            else
            {
                while(j<s2&&g[i]>s[j])
                {
                    j++;
                }
            }
        }
        return c;
    }
};