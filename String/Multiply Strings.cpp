class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        
        vector<int>s;
        int c=0,k=0,j;
        int f;
        for(int i=0;i<num2.size();i++)
        {
            f=k;
            c=0;
            for(j=0;j<num1.size();j++)
            {
                int x=(num1[j]-48)*int(num2[i]-48)+c;
                    if(f<s.size())
                        x=x+s[f];
                    c=x/10;
                    x=x%10;
                if(f>=s.size())
                {
                    
                    s.push_back(x);
                }
                else
                {
                   
                    s[f]=x;
                }
                f++;
            }
            if(c>0)
            {
                if(f<s.size())
                s[f]=c;
                else
                    s.push_back(c);
            }
            k++;
        }
       
        string s1;
        for(k=0;k<s.size();k++)
        {
            s1=to_string(s[k])+s1;
        }
        if(s1[0]=='0')
            return "0";
        return s1;
    }
};