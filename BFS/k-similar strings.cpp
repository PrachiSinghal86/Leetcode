class Solution {
public:
    int kSimilarity(string A, string B) {
       queue<pair<string,pair<int,int>>>q;
        if(A==B)
            return 0;
        unordered_set<string>s;
        q.push({A,{0,0}});
        s.insert(A);
        while(!q.empty())
        {
            pair<string,pair<int,int>>tmp=q.front();
            int idx=tmp.second.first;
            string p=tmp.first;
            q.pop();
            //cout<<tmp.first<<" ";
            while(idx<B.size()&&p[idx]==B[idx])
                idx++;
            for(int i=idx+1;i<B.size();i++)
            {
                if(p[i]==B[idx])
                {   swap(p[i],p[idx]);
                if(p==B)
                    return tmp.second.second+1;
                if(s.find(p)==s.end())
                {q.push({p,{idx+1,tmp.second.second+1}});
                 s.insert(p);
                }
                 swap(p[i],p[idx]);
                }
            }
            
        }
    return 0;
    }
};