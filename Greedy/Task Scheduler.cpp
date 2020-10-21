class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26,0);
        for(char t:tasks)
        {
            v[t-'A']++;
            
        }
        sort(v.begin(),v.end());
        int mx=v[25]-1;
        int idle=mx*n;
        for(int i=24;i>=0&&v[i]>0;i--)
        {
            idle-=min(mx,v[i]);
            
        }
        if(idle>0)
            return tasks.size()+idle;
        else
            return tasks.size();
            
    }
};