class Solution {
public:
    bool bal(string s)
    {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                c+=1;
            else if(s[i]==')'&&c>0)
                c-=1;
            else if(s[i]==')')
                return false;
        }
        if(c==0)
            return true;
        return false;
    }
    vector<string> removeInvalidParentheses(string s) {
        vector<string>ot;
        if(s.size()==0)
        { ot.push_back("");
            return ot;
        }
        map<string,bool>v;
        queue<pair<string,int>>q;
        q.push(make_pair(s,0));
        bool f=false;
        int c=-1;
        v[s]=true;
        while(!q.empty())
        {
            string t=q.front().first;
            if(c!=-1&&q.front().second>c)
                return ot;
            f=bal(t);
            if(f)
            {
                
                c=q.front().second;
                ot.push_back(t);
                q.pop();
                continue;
            }
            for(int k=0;k<t.size();k++)
            {
                if(t[k]=='('||t[k]==')')
                {
                    string tmp=t.substr(0,k);
                    if(k<t.size()-1)
                        tmp=tmp+t.substr(k+1,t.size());
                    if(!v[tmp])
                    {  q.push(make_pair(tmp,q.front().second+1));
                     v[tmp]=true;
                    }
                }
            }
            q.pop();
        }
        return ot;
    }
};