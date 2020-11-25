class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ot;
        vector<int>t;
      p(candidates,target,ot,t,0);
        return ot;
    }
    void p(vector<int>& candidates, int target,vector<vector<int>>&ot, vector<int>t,int i)
    {
        if(target==0)
        {
            ot.push_back(t);
            return;
        }
        if(target<0)
            return;
        for(int j=i;j<candidates.size();j++)
        {
            t.push_back(candidates[j]);
            p(candidates,target-candidates[j],ot,t,j);
            t.pop_back();
        }
    }
};