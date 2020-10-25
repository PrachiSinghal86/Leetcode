class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int l=0,lr;
        if(nums.size()<3)
            return false;
        for(int i=0;i<nums.size()-2;i++)
        {
            l=0;
            for(int j=i+1;j<nums.size();j++)
            {
                if(l==0&&nums[j]>nums[i])
                {
                    l=1;
                    lr=nums[j];
                }
                
                else if(l==1&&nums[j]>lr)
                {
                    lr=nums[j];
                }
                else if(l==1&&nums[j]<lr&&nums[i]<nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};