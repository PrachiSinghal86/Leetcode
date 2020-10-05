class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int c=intervals.size();
        for(int i=0;i<intervals.size();i++)
            {
            for(int j=0;j<intervals.size();j++)
                {
                if(i!=j&& intervals[i][0]>=intervals[j][0]&&intervals[i][1]<=intervals[j][1])
                    {
                    c-=1;
                break;}
            }
        }
        return c;
    }
};