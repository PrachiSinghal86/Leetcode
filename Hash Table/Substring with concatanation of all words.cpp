class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        map<string,int>m1;
        vector<int>ot;
        if(words.size()==0||s.size()==0)
            return ot;
        for(int i=0;i<words.size();i++)
        {
            m1[words[i]]+=1;
        }
        int l=words[0].size()*words.size();
        for(int i=0;i<s.size()-l+1;i++)
        {
            map<string,int>m2;
            for(int j=0;j<words.size();j++)
            {
                string x=s.substr(i+j*words[0].size(),words[0].size());
                m2[x]+=1;
            }
            if(m1==m2)
                ot.push_back(i);
        }
        return ot;
    }
};