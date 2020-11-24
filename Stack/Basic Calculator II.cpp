class Solution {
public:
    int calculate(string s) {
        if(s.size()==0)
            return 0;
        stack<int>n;
        stack<char>op;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
            {   op.push(s[i]);
             i+=1;
            }
            else if(s[i]==' ')
            {
                i+=1;
               
            }
            else
            {
                int x=0;
                while(i<s.size()&&s[i]-48>=0&&s[i]-48<=9)
                {x=x*10+(s[i]-48);
                 i+=1;
                 }
                if(op.empty()||op.top()=='+'||op.top()=='-')
                    n.push(x);
                else
                {
                    int c=n.top();
                    n.pop();
                    if(op.top()=='*')
                        n.push(c*x);
                    else
                        n.push(c/x);
                   op.pop();
                    
                }
                                   
            }
        }
        int neg=0,pos=0;
        while(!op.empty())
        {
            if(op.top()=='+')
                pos+=n.top();
            else
                neg+=n.top();
            n.pop();
            op.pop();
        }
        pos+=n.top();
        return pos-neg;
        
    }
};