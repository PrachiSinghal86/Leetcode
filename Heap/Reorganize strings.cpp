typedef pair<int,char> pp;
class Solution {
public:
    string reorganizeString(string S) {
      sort(S.begin(),S.end());
      int i=0;
        priority_queue<pp,vector<pp>>pq;
        while(i<S.size())
        {
            int j=i+1;
            while(j<S.size()&&S[i]==S[j])
                j+=1;
            pq.push({j-i,S[i]});
            i=j;
        }
        string ot;
        while(pq.size()>=2)
        {
            pair<int,char>p1=pq.top();
            pq.pop();
            pair<int,char>p2=pq.top();
            pq.pop();
            ot.push_back(p1.second);
            ot.push_back(p2.second);
            if(p1.first>1)
                pq.push({p1.first-1,p1.second});
            if(p2.first>1)
                pq.push({p2.first-1,p2.second});
        }
        if(!pq.empty())
        {
            if(pq.top().first==1)
                ot.push_back(pq.top().second);
            else 
                return "";
        }
        return ot;
    }
};