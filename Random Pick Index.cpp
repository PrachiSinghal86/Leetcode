class Solution {
public:
    vector<int>n;
    Solution(vector<int>& nums) {
        n=nums;
    }
    
    int pick(int target) {
        int c=0;
        int idx=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==target)
            {
                c+=1;
                if(rand()%c==0)
                    idx=i;
                
            }
        }
        return idx;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */