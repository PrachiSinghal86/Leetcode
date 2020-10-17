class Solution {
public:
    string minRemoveToMakeValid(string s) {
      stack<char>st;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')'&&c>0)
            {
                st.push(')');
                c-=1;
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
                c+=1;
            }
            else if(s[i]!=')')
                st.push(s[i]);
        }
        string ot="";
        c=0;
        while(!st.empty())
        {
            if(st.top()==')')
            {
                c+=1;
                ot.push_back(st.top());
            }
            else if(st.top()=='('&&c>0)
            {
                c-=1;
                ot.push_back(st.top());
            }
            else if(st.top()!='(')
            {
              ot.push_back(st.top());
            }
            st.pop();
        }
        reverse(ot.begin(),ot.end());
        return ot;
    }
};