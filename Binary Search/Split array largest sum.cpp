class Solution {
public:
    int split(vector<int>& nums,long mid)
    {
        long int tmp=0;
        int p=1;
        for(int i=0;i<nums.size();i++)
        {
            if(tmp+nums[i]>mid)
            {
                tmp=nums[i];
                p+=1;
            }
            else
            {
                tmp=tmp+nums[i];
            }
        }
        return p;
    }
    int splitArray(vector<int>& nums, int m) {
        long int sum1=accumulate(nums.begin(),nums.end(),0);
         int mx=*max_element(nums.begin(),nums.end());
         int lo=mx;
        long int hi=sum1;
        if(nums.size()==m)
        {   //cout<<"a";
            return mx;}
        while(lo<hi)
        {
            long mid=(lo+hi)/2;
            int pieces=split(nums,mid);
            
            if(pieces>m)
            {
                lo=mid+1;
            }
            else
            {
                hi=mid;
            }
        }
        return lo;
    }
};