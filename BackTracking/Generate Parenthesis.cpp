class Solution {
public:
    void tempf(int n,string s,int c,int l,vector<string>&output)
    {
         if(c<0||c>n||l>2*n)
        {
            return;
        }
        if(l==2*n && c==0)
        {
            output.push_back(s);
            return;
        }
       
        tempf(n,s+"(",c+1,l+1,output);
        tempf(n,s+")",c-1,l+1,output);
    }
    vector<string> generateParenthesis(int n) {
     vector<string> output;
        int c=0,l=0;
        if(n==0)
        {
            output.push_back("");
            return output;
        }
        string s="";
        tempf(n,s,c,l,output);
        return output;
    }
};