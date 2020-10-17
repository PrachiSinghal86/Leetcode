class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int a,b;
       
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                s.push(a+b);
                
            }
            else if(tokens[i]=="-")
            {
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                s.push(a-b);
                
            }
            else if(tokens[i]=="*")
            {
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                s.push(a*b);
                
            }
            else if(tokens[i]=="/")
            {
                b=s.top();
                s.pop();
                a=s.top();
                s.pop();
                s.push(a/b);
                
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};