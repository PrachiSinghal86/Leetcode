class Solution {
public:
    string removeDuplicateLetters(string s) {
      vector<bool>v(26,false);
       vector<int>ct(26,0);
        int i;
        stack<char>st;
        for(i=0;i<s.size();i++)
            ct[s[i]-'a']+=1;
    for(i=0;i<s.size();i++)
        {
      if(!v[s[i]-'a'])
            { while(!st.empty()&&st.top()>s[i]&&ct[st.top()-'a']>0) 
         {  v[st.top()-'a']=false;
           st.pop();}
        
            v[s[i]-'a']=true;
            st.push(s[i]);
        }
        ct[s[i]-'a']-=1;
    }
        string a;
        while(!st.empty())
            {
            a=st.top()+a;
            st.pop();
        }
        return a;
    }
};