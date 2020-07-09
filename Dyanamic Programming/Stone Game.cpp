class Solution {
public:
    bool stoneGame(vector<int>& piles) {
       int n=piles.size(),e=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                e+=piles[i];
            }
            else
            {
                odd+=piles[i];
            }
        }
        if(e==odd)
            return false;
        return true;
    }
};