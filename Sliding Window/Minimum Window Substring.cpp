class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,f=0;
        
        string mini="";
        map<char,pair<int,int>>m;
        for(char i:t)
        {
            if(m.find(i)!=m.end())
            {
                m[i].first+=1;
            }
            else
                m[i]=make_pair(1,0);
        }
       
        while(l<=r&&r<s.size())
        {
            if(m.find(s[r])!=m.end())
            {
                m[s[r]].second+=1;
                if(r-l+1>=t.size())
                    {
                    f=0;
                    for(auto i=m.begin();i!=m.end();i++)
                     {
                        if(i->second.first>i->second.second)
                        {
                            f=1;
                            break;
                        }
                     }
                    if(f==0)
                    {
                        if(mini.size()==0)
                        {
                            mini=s.substr(l,r-l+1);
                            
                        }
                        else if(r-l+1<mini.size())
                        {
                           mini=s.substr(l,r-l+1); 
                        }
                        while(l<=r)
                        {
                            if(m.find(s[l])!=m.end())
                            {
                                m[s[l]].second-=1;
                                if(m[s[l]].first>m[s[l]].second)
                                {
                                    l+=1;
                                    break;
                                }
                                
                            }
                            l+=1;
                            if(r-l+1<mini.size())
                        {
                           mini=s.substr(l,r-l+1); 
                        }
                                
                        }
                    }
                    }
            }
              r+=1;

        }
        return mini;
    }
};