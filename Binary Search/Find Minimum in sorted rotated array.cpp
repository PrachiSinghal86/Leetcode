class Solution {
public:
    int findMin(vector<int>& nums) {
        int e=nums.size()-1;
        int f=0,m;
        if(e==0)
            return nums[0];
        else if(nums[0]<nums[e])
            return nums[0];
        else if(nums[e]<nums[e-1])
            return nums[e];
        while(f<e)
        {
            m=(f+e)/2;
           
            if(m>f && nums[m-1]>nums[m])
                return nums[m];
            if(m<e &&nums[m+1]<nums[m])
                return nums[m+1];
                
            if(nums[e]>nums[m])
                e=m-1;
            
            else
                f=m+1;
            
            
            
        }
        return nums[f];
    }
};