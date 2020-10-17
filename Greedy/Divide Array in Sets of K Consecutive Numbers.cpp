class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()==0&&k==0)
            return true;
        else if(nums.size()==0)
            return false;
        else if(nums.size()%k!=0)
            return false;
        sort(nums.begin(),nums.end());
        map<int,int>m;
        m.insert(make_pair(nums[0],1));
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                m[nums[i]]+=1;
            else
            {
                m.insert(make_pair(nums[i],1));
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]>0)
            {
                m[nums[i]]-=1;
                for(int j=1;j<k;j++)
                {
                    if(m[nums[i]+j]>0)
                        m[nums[i]+j]-=1;
                    else
                    { 
                        return false;
                    }
                }
            }
        }
        return true;
    }
};