class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int l=nums.size(),i;
        vector<int>ot;
        map<int,int>m;
        for(i=0;i<l;i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                m[nums[i]]+=1;
            }
            else
            {
                m.insert(make_pair(nums[i],0));
            }
        }
        l=m.size();
        priority_queue<pair<int,int> >pq;
        
       for (const auto &[k, v] : m)
           pq.push(make_pair(v,k));
        for(i=0;i<k;i++)
        {
            ot.push_back(pq.top().second);
            pq.pop();
        }
       sort(ot.begin(),ot.end());
        return ot;
    }
};
    }
};