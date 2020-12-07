class Solution {
public:
    int m=INT_MAX;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>res;
        
        
        set<string>s;
        set<string>cach;
        for(string w:words)
        {
            int n=w.size();
            if(n==0)
                continue;
            m=min(m,n);
            s.insert(w);
        }
     
        for(string w:words)
        {
            if(w.size()==0)
                continue;
           if(canf(w,s,cach))
           {  res.push_back(w);
             // cach.insert(w);
           }
           
            
        }
        return res;
    }
    bool canf(string w,set<string>&s,set<string>&cach)
    {
        if(cach.find(w)!=cach.end())
            return true;
        for(int j=m;j<=w.size()-m;j++)
        {  string l=w.substr(0,j);
            string right=w.substr(j);
            if(s.find(l)!=s.end())
                {
                    if(s.find(right)!=s.end()||canf(right,s,cach))
                    {
                        cach.insert(w);
                        return true; 
                    }
                   
                }
        }
        return false;
    }
};