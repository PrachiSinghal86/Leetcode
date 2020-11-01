class Solution {
public:
    void p(string digits,int i,vector<string>m,vector<string>&ot,string c)
    {
        if(i==digits.size())
        {
            ot.push_back(c);
            return;
        }
        int x=digits[i]-'2';
        for(int j=0;j<m[x].size();j++)
        {
            p(digits,i+1,m,ot,c+m[x][j]);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>m={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ot;
        string c="";
        if(digits.size()==0)
            return ot;
        p(digits,0,m,ot,c);
        return ot;
    }
};