class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0;
        vector<string>ot;
        while(i<nums.size())
        {
            int x=i;
            i+=1;
            while(i<nums.size()&&nums[i]==nums[i-1]+1)
                i+=1;
            if(i==x+1)
                ot.push_back(to_string(nums[x]));
            else
            {
                string m=to_string(nums[x]);
                m=m+"->";
                m=m+to_string(nums[i-1]);
                ot.push_back(m);
            }
        }
        return ot;
    }
};