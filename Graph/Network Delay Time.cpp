typedef pair<int,int> pp;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        vector<vector<pair<int,int>>>gr(N+1);
        vector<int>dist(N+1,INT_MAX);
        dist[0]=0;
        for(int i=0;i<times.size();i++)
        {
            gr[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        priority_queue<pp,vector<pp>,greater<pp>>pq;
        pq.push({0,K});
        while(!pq.empty())
        {
            int nd=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            if(dist[nd]==INT_MAX)
            {
                dist[nd]=d;
                for(int i=0;i<gr[nd].size();i++)
                {
                    if(dist[gr[nd][i].first]!=INT_MAX)
                        continue;
                    pq.push({d+gr[nd][i].second,gr[nd][i].first});
                }
            }
        }
        int mx=*max_element(dist.begin(),dist.end());
        if(mx==INT_MAX)
            return -1;
        else
            return mx;
    }
};