class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==1)
            return intervals;
        vector<vector<int>>ot;
        if(intervals.size()==0)
            return ot;
        int s=intervals[0][0];
        int e=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(e>=intervals[i][0]&&s<=intervals[i][0])
                e=max(e,intervals[i][1]);
            else
            {
                vector<int>t;
                t.push_back(s);
                t.push_back(e);
                ot.push_back(t);
                s=intervals[i][0];
                e=intervals[i][1];
            }
        }
         vector<int>t;
        t.push_back(s);
        t.push_back(e);
        ot.push_back(t);
        return ot;
    }
};