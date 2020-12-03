class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int c=0;
        unordered_map<string,int>m;
        
        for(int i=0;i<words.size();i++)
        {
            int j=0,k=0;
            if(m.find(words[i])!=m.end())
            {
                c=c+m[words[i]];
                continue;
            }
            while(j<S.size()&&k<words[i].size())
            {
                if(words[i][k]==S[j])
                {
                    k++;                    
                }
                j++;
            }
            if(k==words[i].size())
            {c+=1;
             m.insert({words[i],1});
            }
            else
                m.insert({words[i],0});
            
        }
        return c;
    }
};