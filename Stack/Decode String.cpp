class Solution {
public:
    string r(string s,int n)
    {
        string o=s;
        for(int i=1;i<n;i++)
        {
            o=o+s;
        }
        return o;
    }
    string decodeString(string s) {
        stack<char>st;
        stack<int>si;
        int i=0;
        while(i<s.size())
        {
            if(s[i]-'0'>0&&s[i]-'0'<=9)
            {   
               int d=s[i]-'0';
                i+=1;
                while(s[i]-'0'>=0&&s[i]-'0'<=9)
                {
                    d=d*10+(s[i]-'0');
                    i+=1;
                }
                si.push(d);
               
            }
           if(s[i]=='[')
            {   st.push('0');
             i+=1;
            }
           
            else if(s[i]==']')
            {
                int t=si.top();
                si.pop();
                string ts="";
                while(!st.empty()&&st.top()!='0')
                {
                    ts=st.top()+ts;
                    st.pop();
                }
                ts=r(ts,t);
                if(!s.empty()&&st.top()=='0')
                    st.pop();
                for(int j=0;j<ts.size();j++)
                    st.push(ts[j]);
                i+=1;
            }
             else 
            { st.push(s[i]);
             i+=1;
            }
            
        }
        string ot="";
  while(!st.empty())
  {
      ot=st.top()+ot;
      st.pop();
  }
        return ot;
    }
};