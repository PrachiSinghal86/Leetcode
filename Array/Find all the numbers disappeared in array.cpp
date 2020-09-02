class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int l=nums.size(),i;
        vector<int>ot;
       
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
                ot.push_back(i+1);
            }
        }
        return ot;
    }
};