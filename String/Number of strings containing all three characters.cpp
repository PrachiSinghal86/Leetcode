class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        if(s.size()<=2)
            return 0;
        int a=0,b=0,c=0,i,j,f=0;
         if(s[0]=='a')
                a+=1;
            else if(s[0]=='b')
                b+=1;
            else if(s[0]=='c')
                c+=1;
        for(i=0;i<size(s)-2;i++)
        {
           
            if(a&&b&&c)
            {
                cnt+=(s.size()-j);
                 if(s[i]=='a')
                a-=1;
            else if(s[i]=='b')
                b-=1;
            else if(s[i]=='c')
                c-=1;
                
                continue;
                
            }
            for(j=f+1;j<s.size();j++)
            {
                if(s[j]=='a')
                a+=1;
            else if(s[j]=='b')
                b+=1;
            else if(s[j]=='c')
                c+=1;
            if(a&&b&&c)
            {
                cnt+=(s.size()-j);
                
               
                break;
            }
            }
            if(s[i]=='a')
                a-=1;
            else if(s[i]=='b')
                b-=1;
            else if(s[i]=='c')
                c-=1;
            f=j;
            
        }
        return cnt;
    }
};