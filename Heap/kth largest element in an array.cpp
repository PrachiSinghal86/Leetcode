class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        k=k-1;
        while(k>0)
        {   pq.pop();
          k-=1;
        }
        return pq.top();
    }
};