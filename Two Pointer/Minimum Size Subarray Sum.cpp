class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum=0,l=0,r=0,mini=nums.size()+1;
        while(l<=r&&r<nums.size())
        {
            sum+=nums[r];
            if(sum>=s)
            {
                 if(r-l+1<mini)
                    {
                       mini=r-l+1;
                    }
                while(l<=r)
                {
                    sum-=nums[l];
                    l+=1;
                    if(sum<s)
                        break;
                    if(r-l+1<mini)
                        mini=r-l+1;
                }
            }
            r+=1;
        }
        if(mini==nums.size()+1)
            return 0;
        else return mini;
    }
};