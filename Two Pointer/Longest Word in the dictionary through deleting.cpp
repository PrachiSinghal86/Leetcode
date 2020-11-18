class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string ot="";
        for(int i=0;i<d.size();i++)
        {
            int j,k;
            for(j=0,k=0;j<s.size()&&k<d[i].size();j++)
            {
                if(d[i][k]==s[j])
                    k++;
            }
            if(k==d[i].size())
            {
                if(ot.size()==d[i].size()&&d[i]<ot)
                    ot=d[i];
                else if(ot.size()<d[i].size())
                    ot=d[i];
            }
        }
        return ot;
    }
};