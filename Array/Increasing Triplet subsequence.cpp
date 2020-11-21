class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int>v(3,-1);
        int m=-1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<3;j++)
            {
                if(v[j]==-1||nums[v[j]]>nums[i])
                {    v[j]=i;
                 break;
                }
                else if(nums[v[j]]==nums[i])
                    break;
                
            }
            if(v[2]!=-1)
                return true;
        }
        return false;
    }
};