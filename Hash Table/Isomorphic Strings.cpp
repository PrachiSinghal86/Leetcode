class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int l=s.size(),i;
        map<char,char>m;
        map<char,char>m2;
        if(l==0)
            return true;
      
        
        for(i=0;i<l;i++)
        {
            if(m.find(s[i])!=m.end())
            {
                if(m[s[i]]!=t[i])
                    return false;
                
                
            }
          
            else
            {
                if(m2.find(t[i])!=m2.end())
                {
                    if(m2[t[i]]!=s[i])
                        return false;
                }
                m.insert(pair<char,char>(s[i],t[i]));
                m2.insert(pair<char,char>(t[i],s[i]));
            }
        }
        return true;
    }
};