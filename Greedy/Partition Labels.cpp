class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int>v(27,0);
        vector<int>ot;
        int s=-1,i;
        for(i=0;i<S.size();i++)
        {
            v[int(S[i])-97]=i;
        }
        int mx=0;
        for(i=0;i<S.size();i++)
        {
            mx=max(mx,v[S[i]-97]);
            if(mx==i)
            {
                ot.push_back(i-s);
                s=i;
            }
        }
        return ot;
    }
};