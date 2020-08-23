class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i=0,j=piles.size()-2,c=0;
        while(j>i)
        {
         c=c+piles[j];
            j=j-2;
            i+=1;
        }
        return c;
    }
};