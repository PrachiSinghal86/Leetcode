class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()%2==0)
        {
            if(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()))
                return true;
            
        }
       
            int i=1,j=0,f=0;
            while(i<=s.size()/2)
            {   f=0,j=0;
                while(j<s.size()-i)
                {
                if(s.substr(j,i)!=s.substr(j+i,i))
                {
                    f=1;
                   
                    break;
                }
                    j=j+i;
                }
                if(f==0)
                    return true;
                i=i+1;
                while(s.size()%i!=0)
                    i=i+1;
            }
        
        return false;
    }
};