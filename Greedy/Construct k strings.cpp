class Solution {
public:
    bool canConstruct(string s, int k) {
        int l=s.size();
        if(l<k)
            return false;
        if(l==k)
            return true;
        map<char,int>m;
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(m.find(s[i])!=m.end())
            {
                m[s[i]]+=1;
            }
            else
            {
                m.insert(pair<char,int>(s[i],1));
            }
        }
        for(auto x=m.begin();x!=m.end();x++)
        {
            if(x->second%2!=0)
            {
                c++;
            }
        }
        if(c>k)
            return false;
        return true;
    }
};