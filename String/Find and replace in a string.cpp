class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
        string ot;
        int t=0;
        
        if(indexes.size()==0)
            return S;
        for(int i=0;i<indexes.size();i++)
        {
            for(int j=i+1;j<indexes.size();j++)
            {
                if(indexes[i]>indexes[j])
                {
                    swap(indexes[i],indexes[j]);
                    swap(sources[i],sources[j]);
                    swap(targets[i],targets[j]);
                         }
            }
        }
        for(int i=0;i<S.size();i++)
        {
            //cout<<S.substr(i,sources[t].size())<<" "<<sources[t]<<" ";
            if(i==indexes[t]&&S.substr(i,sources[t].size())==sources[t])
            {
                ot=ot+targets[t];
                
                i=i+sources[t].size()-1;
                t+=1;
                
            }
            else if(i==indexes[t])
            { t+=1;
             ot.push_back(S[i]);
            }
            else
            {
                ot.push_back(S[i]);
            }
            if(t>=indexes.size())
            {
                ot=ot+S.substr(i+1);
                break;
            }
        }
        return ot;
    }
};