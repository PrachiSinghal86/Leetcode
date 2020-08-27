class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>ot;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                
                ot.push_back(m[target-nums[i]]);
                ot.push_back(i);
                return ot;
            }
            m.insert(make_pair(nums[i],i));
        }
        return ot;
    }
};