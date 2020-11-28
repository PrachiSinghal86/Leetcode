class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int>v(nums.size());
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            {
            if(m.find(nums[i])!=m.end())
                v[i]=m[nums[i]];
            else
                {
                int c=0;
                for(int j=0;j<nums.size();j++)
                    if(nums[i]>nums[j])
        c+=1;
 v[i]=c;
                m.insert({nums[i],c});
                
            }
        }
        return v;
    }
};