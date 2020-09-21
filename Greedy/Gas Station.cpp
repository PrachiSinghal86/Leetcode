class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int c=0;
    for(int i=0;i<gas.size();i++)
    {
        c=c+gas[i]-cost[i];
    }
    if(c<0)
    return -1;
    int i=0,s=0;
    c=0;
    while(i<gas.size())
    {
        c=c+gas[i]-cost[i];
        if(c<0)
        {
            c=0;
            s=i+1;
        }
        i++;
    }
    return s;
    }
};