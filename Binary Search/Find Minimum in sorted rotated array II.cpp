class Solution {
public:
    int findMin(vector<int>& nums) {
        int e=nums.size()-1;
        int f=0,m;
        
        while(f<e)
        {
            m=(f+e)/2;
           
            if(nums[m]==nums[e])
                e--;
            else if(nums[m]>nums[e])
                f=m+1;
            else
                e=m;
            
            
        }
        return nums[e];
    }
};