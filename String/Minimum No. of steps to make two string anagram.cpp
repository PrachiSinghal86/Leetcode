class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
    
        int i=0,j=0,c=0;
        while(i<s.size()&&j<t.size())
        {
            if(s[i]!=t[j])
            {
                
                if(s[i]<t[j])
                { i++;
                 c+=1;}
                else
                    j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        if(i<s.size())
         c=c+s.size()-i;
        return c;
    }
};