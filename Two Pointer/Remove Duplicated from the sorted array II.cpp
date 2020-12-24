class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int i=1,c=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j-1]==nums[j])
            {
                if(c==1)
                {
                   
                   continue;
                }
                 c=1;
            }
            else
                c=0;
            //cout<<i<<j;
            nums[i]=nums[j];
            i+=1;
            
        }
        return i;
    }
};