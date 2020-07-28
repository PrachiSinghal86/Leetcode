class Solution {
public:
    int minimumSwap(string s1, string s2) {
       int c=0,n=s1.size(),i=0,x=0,y=0;
        
        while(i<n)
        {
            if(s1[i]!=s2[i])
            {
                if(s1[i]=='x')
                    x+=1;
                else
                    y+=1;
                
            }
            i+=1;
        }
        if((x+y)%2!=0)
            return -1;
        
        c=c+(x/2);
        if(x%2!=0)
        { c=c+2;
            y-=1;}
        c=c+y/2;
        return c;
    }
};