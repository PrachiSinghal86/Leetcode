class Solution {
public:
    
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>ot;
        int n=nums.size()-1;
        ot.push_back(nums);
        while(1)
        {
         int i=n;
        for( i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0)
            return ot;
        else
        {
            int t=nums.size()-1;
            while(t>=0&&nums[t]<=nums[i])
                t--;
            int x=nums[t];
            nums[t]=nums[i];
            nums[i]=x;
            reverse(nums.begin()+i+1,nums.end());
            ot.push_back(nums);
        }
        }
        return ot;
    }
};