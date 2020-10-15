class Solution {
public:
    int maximum69Number (int num) {
        string s="";
        int i;
        while(num)
            {
            s=to_string(num%10)+s;
            num=num/10;
        }
        int f=0,n=0;
        for(i=0;i<s.size();i++)
            {
            if(s[i]=='6'&&f==0)
                {
                n=n*10+9;
                f=1;
            }
            else
                { n=n*10+s[i]-48;
                 }
        }
        return n;
    }
};