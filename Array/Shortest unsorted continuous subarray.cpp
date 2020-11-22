class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>t=nums;
        sort(t.begin(),t.end());
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=t[i])
                break;
            s+=1;
        }
        if(s==nums.size())
            return 0;
        int end=nums.size()-1;
        for(int e=nums.size()-1;e>s;e--)
        {
            if(nums[e]!=t[e])
                break;
            end=end-1;
        }
        return end-s+1;
    }
};