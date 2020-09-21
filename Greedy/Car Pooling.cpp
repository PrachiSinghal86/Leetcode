class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>v(1002,0);
        for(int i=0;i<trips.size();i++)
        {
            v[trips[i][1]]+=trips[i][0];
            v[trips[i][2]]-=trips[i][0];
        }
        int c=0;
        for(int i=0;i<=1000;i++)
        {
            c+=v[i];
            if(c>capacity)
                return false;
        }
        return true;
    }
};