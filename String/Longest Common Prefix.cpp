class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        else if(strs.size()==1)
            return strs[0];
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int j;
            for( j=0;j<prefix.size()&&j<strs[i].size();j++)
            {
                if(prefix[j]!=strs[i][j])
                    break;
            }
            prefix=prefix.substr(0,j);
            
        }
        return prefix;
    }
};