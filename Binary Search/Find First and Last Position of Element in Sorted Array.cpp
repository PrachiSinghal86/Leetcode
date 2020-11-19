class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ot={-1,-1};
        if(nums.size()==0)
            return ot;
        int s=0;
        int e=nums.size()-1;
        if(nums[0]==target)
            ot[0]=0;
        else
        {
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target&&nums[m-1]<target)
            {
                ot[0]=m;
                break;
            }
            else if(nums[m]==target&&nums[m-1]==target)
            {
                e=m-1;
            }
            else if(nums[m]>target)
                e=m-1;
            else if(nums[m]<target)
                s=m+1;
        }
            if(ot[0]==-1)
                return ot;
    }
    s=ot[0];
    e=nums.size()-1;
    if(nums[e]==target)
    {
        ot[1]=e;
        return ot;
    }
       while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target&&nums[m+1]>target)
            {
                ot[1]=m;
                break;
            }
            else if(nums[m]==target&&nums[m+1]==target)
            {
                s=m+1;
            }
            else if(nums[m]>target)
                e=m-1;
            else if(nums[m]<target)
                s=m+1;
        } 
        return ot;
    }
};