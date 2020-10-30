class Solution {
public:
    int jump(vector<int>& nums) {
        int mx=nums[0],cur=nums[0];
        if(cur>nums.size()-1)
            cur=nums.size()-1;
        if(nums.size()==1)
            return 0;
        int c=1;
        for(int i=1;i<nums.size();i++)
        {
            
            mx=max(mx,nums[i]+i);
            if(mx>nums.size()-1)
                mx=nums.size()-1;
            
            if(cur==i)
            {
               
                cur=mx;
                c+=1;
            }
        }
        return c-1;
        
    }
};