class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
                st.push({s[i],1});
            else if(st.top().first==s[i])
                st.top().second+=1;
            else
                 st.push({s[i],1});
            if(st.top().second==k)
                st.pop();
            
        }
        string ot;
        while(!st.empty())
        {
            ot.push_back(st.top().first);
            st.top().second-=1;
            if(st.top().second==0)
                st.pop();
        }
        reverse(ot.begin(),ot.end());
        return ot;
    }
};