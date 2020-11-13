class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    stack<int>s;
        if(nums.size()==0)
            return nums;
        s.push(0);
        vector<int>ot(nums.size(),-1);
        for(int i=1;i<nums.size();i++)
        {
            while(!s.empty()&&nums[i]>nums[s.top()])
            {
                ot[s.top()]=nums[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            int f=0;
            for(int i=0;i<s.top();i++)
            {
                if(nums[i]>nums[s.top()])
                {    ot[s.top()]=nums[i];
                     s.pop();
                 f=1;
                     break;
                }
            }
            if(f==0)
                s.pop();
        }
        return ot;
    }
};