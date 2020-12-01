class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0;
        int e=nums[nums.size()-1]-nums[0];
        while(l<e)
        {
            int m=(l+e)/2;
            int cnt=0,lef=0;
            for(int r=0;r<nums.size();r++)
            {
                while(nums[r]-nums[lef]>m)
                    lef++;
                cnt=cnt+r-lef;
                
            }
            if(cnt>=k)
                e=m;
            else
                l=m+1;
        }
        return l;
    }
};