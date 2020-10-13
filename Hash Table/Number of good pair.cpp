class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m.insert(make_pair(nums[i],1));
            }
            else
            {
                c+=m[nums[i]];
                m[nums[i]]+=1;
            }
        }
        return c;
    }
};