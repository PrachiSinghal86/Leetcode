class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                if(c!=INT_MIN&&i-c<k+1)
                    return false;
                c=i;
            }
            //cout<<c;
        }
        return true;
    }
};