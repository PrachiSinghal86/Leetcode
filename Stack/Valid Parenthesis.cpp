class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()%2!=0)
            return false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')')
            {
                if(st.empty()||st.top()!='(')
                    return false;
                else
                    st.pop();                  
                        
            }
             else if(s[i]==']')
            {
                if(st.empty()||st.top()!='[')
                    return false;
                else
                    st.pop();                    
         }   
            else 
            {
                if(st.empty()||st.top()!='{')
                    return false;
                else
                    st.pop();                  
             }
        }
        if(st.empty())
            return true;
        return false;
    }
};