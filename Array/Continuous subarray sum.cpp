class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>m;
        int c=0,h=0;
        if(k==0)
        {
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]==0&&nums[i+1]==0)
                {
                    return true;
                }
            }
            return false;
        }
        for(int i=0;i<n;i++)
        {
           
            c=(c+nums[i])%k;
            if(c==0&&i>0)
            {
                return true;
            }
            if(m.find(c)!=m.end())
            {   if(i-m[c]>1)
                return true;
                
            }
            
            m.insert(pair<int,int>(c,i));
            
        }
        return false;
    }
};