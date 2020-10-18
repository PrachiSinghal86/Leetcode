class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        m.insert(make_pair(0,1));
        int s=0,i,c=0;
        for(i=0;i<nums.size();i++)
        {
             s=s+nums[i];
            
            if(m.find(s-k)!=m.end())
            {
                c=c+m[s-k];
            }
           if(m.find(s)!=m.end())
               m[s]+=1;
            else
                m.insert(make_pair(s,1));
        }
        return c;
    }
};