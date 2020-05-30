class Solution {
public:
    void p(int i,int l,string S,vector<string> &res,string cur)
    {
        if(i==l)
        {
            res.push_back(cur);
            return;
        }
        if(int(S[i]>96))
        {
           p(i+1,l,S,res,cur+S[i]);
            
            p(i+1,l,S,res,cur+char(S[i]-32));
            
        }
        else if(int(S[i])>64)
        {
            p(i+1,l,S,res,cur+S[i]);
            
            p(i+1,l,S,res,cur+char(S[i]+32));
        }
        else
        {
            p(i+1,l,S,res,cur+S[i]);
           
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector <string> res;
        string cur="";
        int l=S.size();
        p(0,l,S,res,cur);
        return res;
    }
};