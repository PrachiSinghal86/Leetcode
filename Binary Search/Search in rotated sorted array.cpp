class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target)
                return m;
            else if(nums[m]>nums[nums.size()-1])
            {
                if(target<nums[0]||target>nums[m])
                    s=m+1;
                else
                    e=m-1;
            }
            else 
            {
                if(target<nums[m]||target>nums[nums.size()-1])
                    e=m-1;
                else
                    s=m+1;
            }
        }
        return -1;
    }
};