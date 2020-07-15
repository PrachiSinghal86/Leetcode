class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),i;
        map<int,int>m;
        for(i=0;i<l1;i++)
        {
            if(m.find(nums1[i])!=m.end())
                m[nums1[i]]+=1;
            else
            {
                m.insert(make_pair(nums1[i],1));
            }
        }
        l1=nums2.size();
        vector<int>res;
        for(i=0;i<l1;i++)
        {
            if(m.find(nums2[i])!=m.end())
            {
                m[nums2[i]]-=1;
                res.push_back(nums2[i]);
                if(m[nums2[i]]==0)
                {
                    m.erase(nums2[i]);
                }
            }
        }
        return res;
    }
};