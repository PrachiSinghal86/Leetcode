
class Solution {
public:


    int myAtoi(string s) {
        int i=0;
        while(i<s.size()&&s[i]==' ')
        {
            i++;
        }
        int ot=0,f=0;
        if(i<s.size()&&s[i]=='+')
        {
            i++;
        }
        else if(i<s.size()&&s[i]=='-')
        {
            i++;
            f=1;
        }
        while(i<s.size())
        {
          
            if(s[i]-'0'>=0&&s[i]-'0'<=9)
            {
               
                if(ot==(INT_MAX)/10&&f==0)
                {
                    if(s[i]-'0'>=7)
                        return INT_MAX;
                }
                else if(ot>(INT_MAX)/10&&f==0)
                    return INT_MAX;
                else if(ot>(INT_MAX)/10&&f==1)
                    return INT_MIN;
                 else if(ot==(INT_MAX)/10&&f==1)
                {
                    if(s[i]-'0'>7)
                        return INT_MIN;
                }
                ot=ot*10+(s[i]-'0');
                 i++;
                }
                
               
            
            else
                break;
          }
            
        
        if(f==1)
            ot=ot*-1;
        return ot;
    }
};