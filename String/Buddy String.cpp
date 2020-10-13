class Solution {
public:
    bool buddyStrings(string A, string B) {
        set<char>s;
        vector<int>v;
        if(A.size()!=B.size())
            return false;
        int c=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]!=B[i])
            {  c+=1;
             v.push_back(i);
            }
            else
            {
                s.insert(A[i]);
            }
            if(c>2)
                return false;
            
        }
        if(c==1)
            return false;
        if(c==2)
        {
            
            if(A[v[0]]==B[v[1]]&&A[v[1]]==B[v[0]])
             return true;
            return false;
        }
        if(s.size()==A.size())
            return false;
        else
            return true;
    }
};