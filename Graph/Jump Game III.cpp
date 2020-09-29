class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        q.push(start);
        vector<int>v(arr.size(),0);
        v[start]=1;
        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            if(arr[t]==0)
                return true;
            if(t-arr[t]>=0&&v[t-arr[t]]==0)
            {
                v[t-arr[t]]=1;
                q.push(t-arr[t]);
            }
            if(t+arr[t]<arr.size()&&v[t+arr[t]]==0)
               {
                v[t+arr[t]]=1;
                q.push(t+arr[t]);
            }   
        }
        return false;
    }
};