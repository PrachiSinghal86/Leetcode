class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int a=0;
        for(int i=0;i<s.size();i++)
            {
            if(s[i]=='(')
                st.push(i);
            else
                {
                if(!st.empty()&&st.top()!=-1&&s[st.top()]=='(')
                    {
                    st.pop();
                    a=max(a,i-st.top());
                }
                else
                    st.push(i);
            }
        }
        return a;
    }
};