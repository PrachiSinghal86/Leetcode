class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int l=nums.size(),i;
        for(i=0;i<l;i++)
        {
            if(nums[i]<=0||nums[i]>l)
            {
                nums[i]=l+2;
            }
        }
        for(i=0;i<l;i++)
        {
            if(nums[i]>=1&&nums[i]<=l&&nums[nums[i]-1]>0)
            {
                nums[nums[i]-1]*=-1;
            }
            else if(nums[i]<=-1&&nums[i]>=(-1*l)&&nums[-1*nums[i]-1]>0)
                 {
                nums[-1*nums[i]-1]*=-1;
            }
        }
        for(i=0;i<l;i++)
        {
            if(nums[i]>0)
            {
                return i+1;
            }
        }
        return l+1;
    }
};