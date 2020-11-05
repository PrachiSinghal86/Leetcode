class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
       int od=0,ev=0;
        for(int i=0;i<position.size();i++)
        {
            if(position[i]%2==0)
                ev+=1;
            else
                od+=1;
        }
        if(ev>od)
            return od;
        else
            return ev;
    }
};