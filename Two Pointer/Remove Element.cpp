class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]!=val)
            {
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                i++;
            }
            j++;
        }
        return i;
    }
};