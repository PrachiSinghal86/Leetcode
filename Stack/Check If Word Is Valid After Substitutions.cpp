class Solution {
public:
    bool isValid(string S) {
        stack <char>st;
        int l=S.size();
        for(int i=0;i<l;i++)
        {
            if(S[i]=='a'||S[i]=='b')
                st.push(S[i]);
            else
            {
                if(!st.empty())
                {
                    if(st.top()!='b')
                        return false;
                    st.pop();
                    if(!st.empty())
                    {
                        if(st.top()!='a')
                            return false;
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};