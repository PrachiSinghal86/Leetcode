class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=nums[0];
        if(nums[0]==0&&nums.size()>1)
            return false;
        for(int i=1;i<nums.size();i++)
        {
            mx=max(nums[i]+i,mx);
            if(mx>=nums.size()-1)
                return true;
            if(mx==i)
                return false;
        }
        return true;
    }
};