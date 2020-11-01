class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ot;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                if(nums[-1*nums[i]-1]<0)
                    ot.push_back(-1*nums[i]);
                else
                   nums[-1*nums[i]-1]*=-1; 
            }
            else
            {
                if(nums[nums[i]-1]<0)
                    ot.push_back(nums[i]);
                else
                   nums[nums[i]-1]*=-1; 
            }
        }
        return ot;
    }
};