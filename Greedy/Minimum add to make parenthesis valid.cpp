class Solution {
public:
    int minAddToMakeValid(string S) {
        int c=0,cur=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='(')
                cur+=1;
            else if(cur==0)
                c+=1;
            else
                cur-=1;
                
        }
        c=c+cur;
        return c;
    }
};