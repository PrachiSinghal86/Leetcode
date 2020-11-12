class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        for( i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0)
            reverse(nums.begin(),nums.end());
        else
        {
            int t=nums.size()-1;
            while(t>=0&&nums[t]<=nums[i])
                t--;
            int x=nums[t];
            nums[t]=nums[i];
            nums[i]=x;
            reverse(nums.begin()+i+1,nums.end());
        }
        return;
    }
};