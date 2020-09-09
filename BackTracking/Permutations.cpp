class Solution {
public:
    void p(vector<int>& nums,int l,int r,vector<vector<int>>&ot)
    {
        if(l==r)
            ot.push_back(nums);
        int i;
        for(i=l;i<r;i++)
        {
            swap(nums[l],nums[i]);
            p(nums,l+1,r,ot);
            swap(nums[l],nums[i]);
            
        }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> ot;
        int r=nums.size(),l=0;
        p(nums,l,r,ot);
        return ot;
    }
};